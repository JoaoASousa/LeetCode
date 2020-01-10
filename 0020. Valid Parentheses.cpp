/*
Runtime: 4 ms, faster than 58.17% of C++ online submissions for Valid Parentheses.
Memory Usage: 8.5 MB, less than 77.52% of C++ online submissions for Valid Parentheses.
*/
class Solution {
public:
    bool isValid(string s) {
        
        ios_base::sync_with_stdio(false);

        if (s.length() % 2) return false;
        
        stack<char> paren;
        
        for (char c : s) {
            
            switch (c) {
                case '(':
                    paren.push(c);
                    break;
                case ')':
                    if (paren.size() == 0 || paren.top() != '(') return false;
                    else paren.pop();
                    break;
                case '[':
                    paren.push(c);
                    break;
                case ']':
                    if (paren.size() == 0 || paren.top() != '[') return false;
                    else paren.pop();
                    break;
                case '{':
                    paren.push(c);
                    break;
                case '}':
                    if (paren.size() == 0 || paren.top() != '{') return false;
                    else paren.pop();
                    break;
                default:
                    return false;
                    break;
            }
            
        }
        
        return paren.size() == 0;
    }
};