/*
Runtime: 4 ms, faster than 98.77% of C++ online submissions for Max Increase to Keep City Skyline.
Memory Usage: 9.3 MB, less than 77.42% of C++ online submissions for Max Increase to Keep City Skyline.
*/
class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        
        vector<int> rows_max;
        int row_max;
        vector<int> cols_max;
        int col_max;
        
        for (size_t i = 0; i < grid.size(); ++i) {
            
            row_max = 0;
            col_max = 0;
            
            for (size_t j = 0; j < grid[0].size(); ++j) {
                if (grid[i][j] > row_max) row_max = grid[i][j];  
                if (grid[j][i] > col_max) col_max = grid[j][i];
            }
            
            rows_max.push_back(row_max);
            cols_max.push_back(col_max);
            
        }
        
        int result = 0;
        for (size_t i = 0; i < grid.size(); ++i) {
            for (size_t j = 0; j < grid[0].size(); ++j) {
                result += ( (rows_max[i] > cols_max[j]) ?  cols_max[j] - grid[i][j] : rows_max[i] - grid[i][j]);
            }
        }
        
        return result;
    }
};