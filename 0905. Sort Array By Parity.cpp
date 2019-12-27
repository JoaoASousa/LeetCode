/*
Runtime: 20 ms, faster than 99.35% of C++ online submissions for Sort Array By Parity.
Memory Usage: 9.8 MB, less than 37.93% of C++ online submissions for Sort Array By Parity.
*/
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        
        ios_base::sync_with_stdio(false);
        
        int aSize = A.size() - 1;
        
        for (int i = 0; i < aSize; ++i) {
            if (A[i] % 2 == 1) {
                swap( A[i--], A[aSize--]);
            }
        }
        
        return A;
    }
};


/*
Runtime: 60 ms, faster than 7.11% of C++ online submissions for Sort Array By Parity.
Memory Usage: 10.1 MB, less than 13.79% of C++ online submissions for Sort Array By Parity.
*/
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        
        ios_base::sync_with_stdio(false);
        
        vector<int> result;
        
        for (int & n : A) {
            if (n % 2) result.push_back(n);
            else result.insert(result.begin(), n);
        }
        
        return result;
    }
};