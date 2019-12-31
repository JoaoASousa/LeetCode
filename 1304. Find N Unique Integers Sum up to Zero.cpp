/*
Runtime: 8 ms, faster than 58.34% of C++ online submissions for Find N Unique Integers Sum up to Zero.
Memory Usage: 8.6 MB, less than 100.00% of C++ online submissions for Find N Unique Integers Sum up to Zero.
*/
class Solution {
public:
    vector<int> sumZero(int n) {
        
        vector<int> result;
        
        if (n == 1) return {0};
        
        int temp = 0;
        
        for (int i = 1; i < n; ++i) {
            result.push_back(i);
            temp += i;
        }
        
        result.push_back(-temp);
        
        return result;
    }
};