/*
Runtime: 52 ms, faster than 76.69% of C++ online submissions for Replace Elements with Greatest Element on Right Side.
Memory Usage: 10.7 MB, less than 100.00% of C++ online submissions for Replace Elements with Greatest Element on Right Side.
*/
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        if (!arr.size()) return arr;
        
        else if (arr.size() == 1) return {-1};
        
        
        int right_max = arr[arr.size() - 1];
        int temp;
        for (size_t i = arr.size() - 2; i > 0; i--) {
            temp = arr[i];
            arr[i] = right_max;
            if (temp > right_max) right_max = temp;
        }
        
        arr[0] = right_max;
        arr[arr.size() - 1] = -1;
        
        return arr;
    }
};