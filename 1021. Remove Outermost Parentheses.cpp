/*
Runtime: 4 ms, faster than 89.41% of C++ online submissions for Remove Outermost Parentheses.
Memory Usage: 9 MB, less than 82.50% of C++ online submissions for Remove Outermost Parentheses.
*/
class Solution {
public:
    string removeOuterParentheses(string S) {
        stack<char> stack_;
        string result;
        
        bool first = true;
        
        for (char & c : S) {
            if (c == '(') {
                if (first) first = false;
                else {result += '(';}
                stack_.push(c);
            }
            else if (c == ')') {
                
                if (stack_.size() != 1) result += ')';
                stack_.pop();
                
                if (stack_.size() == 0) {
                    first = true;
                }
            }
        }
        
        return result;
    }
};