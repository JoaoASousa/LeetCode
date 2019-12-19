/*
Runtime: 8 ms, faster than 92.92% of C++ online submissions for Two Sum.
Memory Usage: 9.6 MB, less than 58.58% of C++ online submissions for Two Sum.
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int,int> > v(nums.size());
        for(int i = 0; i < v.size(); ++i)
            v[i] = make_pair(nums[i], i);
        sort(v.begin(), v.end());
        
        int l = 0, r = nums.size()-1;
        
        while (l < r) {
            int s = v[l].first + v[r].first;
            if      (s < target) l++;
            else if (s > target) r--;
            else{
                vector<int> ret({v[l].second,v[r].second});
                sort(ret.begin(), ret.end());
                return ret;
            }
        }
        return vector<int>();
    }
};