/*
Runtime: 8 ms, faster than 99.75% of C++ online submissions for Count Negative Numbers in a Sorted Matrix.
Memory Usage: 10.3 MB, less than 100.00% of C++ online submissions for Count Negative Numbers in a Sorted Matrix.
*/
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        /*
            {
            {4,     3,       2,      -1}
            {3,     2,       1,     -1}
            {1,     1,      -1,     -2}
            {-1,   -1,      -2,     -3}
            }
        */
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int negativeCounter = 0;
        
        for (int i = grid.size() - 1; i >= 0; i--) {        
            for (int j = grid[0].size() - 1; j >= 0; j--) {
                if (grid[i][j] < 0) negativeCounter++;
                else break;
            }
        }
        return negativeCounter;
    }
    
};


/*
Runtime: 16 ms, faster than 94.40% of C++ online submissions for Count Negative Numbers in a Sorted Matrix.
Memory Usage: 10.2 MB, less than 100.00% of C++ online submissions for Count Negative Numbers in a Sorted Matrix.
*/
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        /*
            {
            {4,     3,       2,      -1}
            {3,     2,       1,     -1}
            {1,     1,      -1,     -2}
            {-1,   -1,      -2,     -3}
            }
        */
        
        int negativeCounter = 0;
        
        for (int i = grid.size() - 1; i >= 0; i--) {        
            for (int j = grid[0].size() - 1; j >= 0; j--) {
                if (grid[i][j] < 0) negativeCounter++;
                else break;
            }
        }
        return negativeCounter;
    }
    
};