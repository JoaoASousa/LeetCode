/*
Runtime: 4 ms, faster than 57.82% of C++ online submissions for Maximum 69 Number.
Memory Usage: 8.5 MB, less than 100.00% of C++ online submissions for Maximum 69 Number.
*/
class Solution {
public:
    int maximum69Number (int num) {
        
        int length = to_string(num).length();
        int result = 0;
        bool first = true;
        vector<int> chars;
        
        for (size_t i = 0; i < length; ++i) {
            chars.push_back(num % 10);
            num /= 10;
        }
        
        for (int i = chars.size() - 1; i >= 0; --i)  {
            result *= 10;
            if (first && (chars[i] == 6)) {
                result += 9;
                first = false;
            }
            else result += chars[i];
        }
        
        return result;
    }
};