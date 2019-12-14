/*
Runtime: 4 ms, faster than 65.25% of C++ online submissions for Jewels and Stones.
Memory Usage: 8.4 MB, less than 67.50% of C++ online submissions for Jewels and Stones.
*/
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count = 0;
        for (auto & c : S) {
            if (find(J.begin(), J.end(), c) != J.end()) count++;
        }
        return count;
    }
};