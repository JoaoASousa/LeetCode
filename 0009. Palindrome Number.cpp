/*
Runtime: 8 ms, faster than 89.95% of C++ online submissions for Palindrome Number.
Memory Usage: 8.2 MB, less than 73.64% of C++ online submissions for Palindrome Number.
*/
class Solution {
public:
    bool isPalindrome(int x) {
        
        ios_base::sync_with_stdio(false);
        
        if (x < 0) return false;
        
        if (x < 10) return true;
        
        long long toTest = x;
        long long reversed = 0;
        
        while (x > 0) {
            reversed *= 10;
            reversed += x % 10;
            x /= 10;
        }
        
        return toTest == reversed;
    }
};


/*
Runtime: 12 ms, faster than 73.35% of C++ online submissions for Palindrome Number.
Memory Usage: 8.1 MB, less than 94.55% of C++ online submissions for Palindrome Number.
*/
class Solution {
public:
    bool isPalindrome(int x) {
        
        if (x < 0) return false;
        
        if (x < 10) return true;
        
        
        long long toTest = x;
        long long reversed = 0;
        
        while (x > 0) {
            reversed *= 10;
            reversed += x % 10;
            x /= 10;
        }
        
        
        return toTest == reversed;
    }
};


/*
Runtime: 16 ms, faster than 52.10% of C++ online submissions for Palindrome Number.
Memory Usage: 8.1 MB, less than 84.55% of C++ online submissions for Palindrome Number.
*/
class Solution {
public:
    bool isPalindrome(int x) {
        
        if (x < 0) return false;
        
        if (x < 10) return true;
        
        string x_str = to_string(x);
        
        int len = x_str.length();
        
        for (int i = 0; i < len / 2; ++i) {
            swap(x_str[i], x_str[len - i - 1]);
        }
        
        return x_str == to_string(x);
    }
};