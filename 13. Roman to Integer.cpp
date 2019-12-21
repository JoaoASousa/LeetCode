/*
Runtime: 12 ms, faster than 78.37% of C++ online submissions for Roman to Integer.
Memory Usage: 11.3 MB, less than 14.71% of C++ online submissions for Roman to Integer.
*/
class Solution {
public:
    int romanToInt(string s) {
        
        map<char, int> dictionary = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };
        
        int integer = 0;
        
        s += " ";
        for (size_t i = 0; i < s.length(); ++i) {
            if (dictionary[s[i]] < dictionary[s[i+1]]) {
                integer -= dictionary[s[i]];
            }
            else {
                integer += dictionary[s[i]];
            }
        }
        
        return integer;
    }
};