/*
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Cells with Odd Values in a Matrix.
Memory Usage: 9.3 MB, less than 100.00% of C++ online submissions for Cells with Odd Values in a Matrix.
*/
class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        vector<int> row(m, 0);
        vector<vector<int> > matrix(n, row);
        int row_;
        int col_;
        for (size_t i = 0; i < indices.size(); ++i) {
            row_ = indices[i][0];
            col_ = indices[i][1];
            for (size_t j = 0; j < matrix[0].size(); ++j) {
                matrix[row_][j]++;
            }
            
            for (size_t k = 0; k < matrix.size(); ++k) {
                matrix[k][col_]++;
            }
        }
        
        
        int odds = 0;
        for (size_t i = 0; i < matrix.size(); ++i) {
            for (size_t j = 0; j < matrix[0].size(); ++j) {
                if (matrix[i][j] % 2) odds++;
            }
        }
        return odds;
    }
};