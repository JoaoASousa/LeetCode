/*
Runtime: 4 ms, faster than 58.84% of C++ online submissions for Split a String in Balanced Strings.
Memory Usage: 8.3 MB, less than 100.00% of C++ online submissions for Split a String in Balanced Strings.
*/
class Solution {
public:
    int balancedStringSplit(string s) {
        int count = 0;
        int substrings = 0;
        
        // L-> +1   R-> -1
        for (char & c : s) {
            
            if (c == 'R') count--;
            else if (c == 'L') count++;
            
            if (!count) {
                substrings++;
            }
        }
        return substrings;
    }
};