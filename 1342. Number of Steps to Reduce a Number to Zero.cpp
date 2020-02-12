/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Number of Steps to Reduce a Number to Zero.
Memory Usage: 8.2 MB, less than 100.00% of C++ online submissions for Number of Steps to Reduce a Number to Zero.
*/
class Solution {
public:
    int numberOfSteps (int num) {
        int count = 0;
        
        while (num > 0) {
            count++;
            if (!(num % 2)) num /= 2;
            else num--;
        }
        return count;
    }
};

/*
Runtime: 4 ms, faster than 55.35% of C++ online submissions for Number of Steps to Reduce a Number to Zero.
Memory Usage: 8.5 MB, less than 100.00% of C++ online submissions for Number of Steps to Reduce a Number to Zero.
*/
class Solution {
public:
    int numberOfSteps (int num) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        int count = 0;
        
        while (num > 0) {
            count++;
            if (!(num % 2)) num /= 2;
            else num--;
        }
        return count;
    }
};