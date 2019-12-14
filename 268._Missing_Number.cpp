/*
Runtime: 32 ms, faster than 22.45% of C++ online submissions for Missing Number.
Memory Usage: 9.7 MB, less than 98.04% of C++ online submissions for Missing Number.
*/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int result;
        
        if (nums.size() == 1){
            if (nums[0] == 0) return 1;
            else return nums[0] - 1;
        }
        
        if (nums[0] != 0) return 0;
        
        for (size_t i = 1; i < nums.size(); ++i) {
            if ( (nums[i] - nums[i-1]) > 1) {
                result = nums[i] - 1;
                return result;
            }
        }
        
        return nums[nums.size()-1] + 1;
    }
};