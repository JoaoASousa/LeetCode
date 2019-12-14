/*
Runtime: 80 ms
Memory Usage: 14 MB
*/
class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        bool increasing = true;
        bool decreasing = true;
        for (size_t i = 1; i < A.size(); ++i) {
            if ((A.at(i) - A.at(i-1) ) < 0 ) {
                decreasing = false;
            }
            else if ( (A.at(i) - A.at(i-1) ) > 0)  {
                increasing = false;
            }
            
        }
        return increasing || decreasing;
        
    }
};


/*
Runtime: 92 ms
Memory Usage: 13.9 MB
*/
class Solution {
public:
    bool isMonotonic(vector<int>& A) {
        bool up;
        bool newUp;
        bool change; bool first = true;
        for (size_t i = 1; i < A.size(); ++i) {
            change = false;
            if ((A.at(i) - A.at(i-1) ) < 0 ) {
                newUp = false;
                change = true;
            }
            else if ( (A.at(i) - A.at(i-1) ) > 0)  {
                newUp = true;
                change = true;
            }
            else continue;
            
            if (change && first) {
                up = newUp;
                first = false;
            }
            else {
                if (change) {
                    if (newUp != up) return false;
                    else up = newUp;
                }
                
            }
        }
        return true;
        
    }
};