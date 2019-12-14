/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for To Lower Case.
Memory Usage: 8.1 MB, less than 100.00% of C++ online submissions for To Lower Case.
*/
class Solution {
public:
    string toLowerCase(string str) {
        int i = 0;
        while(i < str.length()) {
            // 32 separates de upper case letters from the lower case ones (upperCase + 32 = lowerCase)
            str[i] = ( (str[i] > 64) && (str[i] < 91) ) ? str[i] += 32 : str[i];
            ++i;
        }
        return str;
    }
};