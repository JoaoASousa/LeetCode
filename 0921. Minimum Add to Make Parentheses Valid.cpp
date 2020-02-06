/*
Runtime: 4 ms, faster than 63.77% of C++ online submissions for Minimum Add to Make Parentheses Valid.
Memory Usage: 8.6 MB, less than 38.46% of C++ online submissions for Minimum Add to Make Parentheses Valid.
*/
class Solution {
public:
    int minAddToMakeValid(string S) {
        stack<char> s;
        int counter = 0;
        for (char c : S) {
            if (c == '(') s.push(c);
            else if (c == ')') {
                if (s.size() == 0) counter++;
                else s.pop();
            }
        }
        
        return s.size() + counter;
    }
};