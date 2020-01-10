/*
Runtime: 4 ms, faster than 71.67% of C++ online submissions for Remove Element.
Memory Usage: 8.6 MB, less than 79.41% of C++ online submissions for Remove Element.
*/
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        // sorting vector
        sort(nums.begin(), nums.end());
        
        // finding the first val
        vector<int>::iterator it = find(nums.begin(), nums.end(), val);
        
        // removing all elements with value val
        // (erase from the first time it apears the number of elements "val" apears)
        nums.erase(it, it + count(nums.begin(), nums.end(), val));
        
        
        return nums.size();
    }
};