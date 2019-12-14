/*
Runtime: 160 ms, faster than 12.47% of C++ online submissions for Find All Duplicates in an Array.
Memory Usage: 21.1 MB, less than 15.00% of C++ online submissions for Find All Duplicates in an Array.
*/
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        set<int> dup;
        
        sort(nums.begin(), nums.end());
        vector<int> dups;
        if (nums.size() == 0) return dups;
        for (size_t i = 0; i < nums.size()-1; ++i) {
            if (nums.at(i) == nums.at(i+1)) dup.insert(nums.at(i));
        }
        
        copy(dup.begin(), dup.end(), back_inserter(dups));
        
        return dups;
    }
};