/*
Runtime: 256 ms, faster than 62.33% of C++ online submissions for Rank Transform of an Array.
Memory Usage: 31.7 MB, less than 100.00% of C++ online submissions for Rank Transform of an Array.
*/
class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        
        set<int> temp(arr.begin(), arr.end());
        vector<int> results(temp.begin(), temp.end());
        
        sort(results.begin(), results.end(), greater<int>());
        
        unordered_map<int,int> keys;
        
        for (size_t i = 0; i < results.size(); ++i) {
            keys[results[i]] = results.size() - i;
        }
        
        for (size_t i = 0; i < arr.size(); ++i) {
            arr[i] = keys[arr[i]];
        }
        
        return arr;
    }
};