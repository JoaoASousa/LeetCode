/*
Runtime: 4 ms, faster than 68.87% of C++ online submissions for Reverse Integer.
Memory Usage: 8.2 MB, less than 99.05% of C++ online submissions for Reverse Integer.
*/
class Solution {
public:
    int reverse(int x) {
        
        bool negative = (x < 0);
        long reversed = 0;
        
        long x_copy = x;
        
        if (negative) x_copy *= -1;
        
        while (x_copy > 0) {
            reversed *= 10;
            reversed += x_copy % 10;
            x_copy /= 10;
        }
        
        if (negative) {
            reversed *= -1;
            
            if (reversed < -(pow(2,31))) {
                return 0;
            }
        }
        
        else {
            if (reversed > (pow(2,31) - 1)) {
                return 0;
            }
        } 
        
        return reversed;
    }
};