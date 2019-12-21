/*
Runtime: 16 ms, faster than 31.05% of C++ online submissions for Integer to Roman.
Memory Usage: 8.8 MB, less than 44.74% of C++ online submissions for Integer to Roman.
*/
class Solution {
public:
    string intToRoman(int num) {
        vector<int> digits;
        
        while (num) {
            digits.push_back(num % 10);
            num /= 10;
        }
        
        // example: 1994 -> {4, 9, 9, 1}
        
        string result = "";
        
        for (size_t i = 0; i < digits.size(); ++i) {
            switch(i) {
                case 0:
                    if (digits[i] == 4) result = "IV" + result;
                    else if (digits[i] == 9) result = "IX" + result;
                    else {
                        for (size_t n = 0; n < (digits[i] % 5); ++n) result = "I" + result;       
                    }
                    
                    if (digits[i] > 4 && digits[i] < 9) result = "V" + result;
                    break;
                
                case 1:
                    if (digits[i] == 4) result = "XL" + result;
                    else if (digits[i] == 9) result = "XC" + result;
                    else {
                        for (size_t n = 0; n < (digits[i] % 5); ++n) result = "X" + result;       
                    }
                    
                    if (digits[i] > 4 && digits[i] < 9) result = "L" + result;
                    break;
                    
                case 2:
                    if (digits[i] == 4) result = "CD" + result;
                    else if (digits[i] == 9) result = "CM" + result;
                    else {
                        for (size_t n = 0; n < (digits[i] % 5); ++n) result = "C" + result;       
                    }
                    
                    if (digits[i] > 4 && digits[i] < 9) result = "D" + result;
                    break;
                    
                case 3:
                    for (size_t n = 0; n < (digits[i] % 5); ++n) result = "M" + result;
                    break;
                    
            }
        }
        return result;
    }
};


/*
Runtime: 16 ms, faster than 31.05% of C++ online submissions for Integer to Roman.
Memory Usage: 8.9 MB, less than 42.10% of C++ online submissions for Integer to Roman.
*/
class Solution {
public:
    string intToRoman(int num) {
        vector<int> digits;
        
        while (num) {
            digits.push_back(num % 10);
            num /= 10;
        }
        
        // example: 1994 -> {4, 9, 9, 1}
        
        string romans[13] = { "I", "IV", "V", "IX", 
                            "X", "XL", "L", "XC",
                            "C", "CD", "D", "CM",
                            "M"
                          };
        
        string result;
        
        for (size_t i = 0; i < digits.size(); ++i) {
            
            if (digits[i] == 4) result = romans[1 + 4 * i] + result;
            else if (digits[i] == 9) result = romans[3 + 4 * i] + result;
            else {
                for (size_t n = 0; n < (digits[i] % 5); ++n) result = romans[0 + 4 * i] + result;       
            }
            
            if (digits[i] > 4 && digits[i] < 9) result = romans[2 + 4 * i] + result;
        }
        return result;
    }
};


/*
Runtime: 20 ms, faster than 18.97% of C++ online submissions for Integer to Roman.
Memory Usage: 11.3 MB, less than 26.32% of C++ online submissions for Integer to Roman.
*/
class Solution {
public:
    string intToRoman(int num) {
        vector<int> digits;
        
        while (num) {
            digits.push_back(num % 10);
            num /= 10;
        }
        
        // example: 1994 -> {4, 9, 9, 1}
        
        vector<string> romans = { "I", "IV", "V", "IX", 
                                  "X", "XL", "L", "XC",
                                  "C", "CD", "D", "CM",
                                  "M"
                                };
        
        string result;
        
        for (size_t i = 0; i < digits.size(); ++i) {
            
            if (digits[i] == 4) result = romans[1 + 4 * i] + result;
            else if (digits[i] == 9) result = romans[3 + 4 * i] + result;
            else {
                for (size_t n = 0; n < (digits[i] % 5); ++n) result = romans[0 + 4 * i] + result;       
            }
            
            if (digits[i] > 4 && digits[i] < 9) result = romans[2 + 4 * i] + result;
        }
        return result;
    }
};