/*
Runtime: 20 ms, faster than 36.57% of C++ online submissions for Single Number.
Memory Usage: 9.8 MB, less than 77.78% of C++ online submissions for Single Number.
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size(); i+=2) {
            if (nums[i] != nums[i-1]) return nums[i-1];
        }
        if (nums.size() % 2) return nums[nums.size()-1];
        return 0;
    }
};


/*
Runtime: 1176 ms, faster than 7.99% of C++ online submissions for Single Number.
Memory Usage: 9.6 MB, less than 100.00% of C++ online submissions for Single Number.
*/
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for (int & n : nums) {
            if (count(nums.begin(), nums.end(), n) != 2) return n;
        }
        return 0;
    }
};