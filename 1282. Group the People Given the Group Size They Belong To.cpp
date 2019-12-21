/*
Runtime: 44 ms, faster than 6.92% of C++ online submissions for Group the People Given the Group Size They Belong To.
Memory Usage: 18.9 MB, less than 100.00% of C++ online submissions for Group the People Given the Group Size They Belong To.
*/
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        
        vector<vector<int> > result;
        vector<int> sizesSeen;
        
        map<int,vector<int> > m;
        
        vector<int> temp;
        
        // groupSizes = [3,3,3,3,3,1,3]
        
        
        // m -> { 3: {0,1,2,3,4,6}, 1: {5} }
        
        for (int i = 0; i < groupSizes.size(); ++i){
            if (find(sizesSeen.begin(), sizesSeen.end(), groupSizes[i]) == sizesSeen.end()) {
                m[groupSizes[i]] = {i};
                sizesSeen.push_back(groupSizes[i]);
            }
            else {
                temp = m[groupSizes[i]];
                temp.push_back(i);
                m[groupSizes[i]] = temp;
            }
        }
        
        map<int,vector<int> >::iterator it = m.begin();
        
        vector<int>::iterator v;
        
        vector<int> group;
        
        while (it != m.end()){
            
            group.clear();
            
            v = (it->second).begin();
            
            while (v != (it->second).end()) {
                if (group.size() == it->first) {
                    result.push_back(group);
                    group.clear();
                }
                else {
                    group.push_back(*v);
                }
                if (group.size() == it->first) {
                    result.push_back(group);
                    group.clear();
                }
                v++;              
            }
            ++it;
        }
        
        return result;
    }
};