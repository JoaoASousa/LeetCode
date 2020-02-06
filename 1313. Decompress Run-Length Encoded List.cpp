/*
Runtime: 44 ms, faster than 90.67% of C++ online submissions for Decompress Run-Length Encoded List.
Memory Usage: 10.7 MB, less than 100.00% of C++ online submissions for Decompress Run-Length Encoded List.
*/
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        
        vector<int> results;
        
        for (size_t i = 0; i < nums.size()/2; ++i) {
            for (size_t j = 0; j < nums[2*i]; ++j) results.push_back(nums[2*i+1]);
        }
        
        return results;
    }
};