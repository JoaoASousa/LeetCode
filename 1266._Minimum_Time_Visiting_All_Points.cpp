/*
Runtime: 8 ms, faster than 89.44% of C++ online submissions for Minimum Time Visiting All Points.
Memory Usage: 10.2 MB, less than 100.00% of C++ online submissions for Minimum Time Visiting All Points.
*/
class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        
        int result = 0;
        
        int a = 0, b = 0, minimum = 0;
        
        vector<int> current_pos = points[0];
        
        for (int i = 1; i < points.size(); ++i) {
            
            // to get the current position to be alligned with the next point (x or y axis)
            // using only diagonals
            while ( (current_pos[0] != points[i][0]) && (current_pos[1] != points[i][1]) ) {
                
                a = points[i][0] - current_pos[0];
                b = points[i][1] - current_pos[1];
                minimum = min(abs(a),abs(b));
                
                // to move right and up
                if (current_pos[0] < points[i][0] && current_pos[1] < points[i][1]) {
                    current_pos[0] += minimum;
                    current_pos[1] += minimum;
                    result += minimum;
                }
                // to move right and down
                else if (current_pos[0] < points[i][0] && current_pos[1] > points[i][1]) {
                    current_pos[0] += minimum;
                    current_pos[1] += - minimum;
                    result += minimum;
                }
                // to move left and up
                else if (current_pos[0] > points[i][0] && current_pos[1] < points[i][1]) {
                    
                    current_pos[0] += - minimum;
                    current_pos[1] += minimum;
                    result += minimum;
                }
                // to move left and down
                else if (current_pos[0] > points[i][0] && current_pos[1] > points[i][1]) {
                    current_pos[0] += - minimum;
                    current_pos[1] += - minimum;
                    result += minimum;
                }
            }
            
            if (current_pos[0] == points[i][0] && current_pos[1] == points[i][1]) {
                continue;
            }
            
            // aligned by the x axis
            if (current_pos[0] == points[i][0]) {
                result += abs(current_pos[1] - points[i][1]);
                current_pos[1] = points[i][1];
            }
            
            // aligned by the y axis
            if (current_pos[1] == points[i][1]) {
                result += abs(current_pos[0] - points[i][0]);
                current_pos[0] = points[i][0];
            }
            
        }
        
        return result;
    }
};


/*
Runtime: 20 ms, faster than 5.35% of C++ online submissions for Minimum Time Visiting All Points.
Memory Usage: 10.1 MB, less than 100.00% of C++ online submissions for Minimum Time Visiting All Points.
*/
class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        
        int result = 0;
        
        int a = 0, b = 0;
        
        vector<int> current_pos = points[0];
        
        for (int i = 1; i < points.size(); ++i) {
            
            // to get the current position to be alligned with the next point (x or y axis)
            // using only diagonals
            while ( (current_pos[0] != points[i][0]) && (current_pos[1] != points[i][1]) ) {
                
                a = points[i][0] - current_pos[0];
                b = points[i][1] - current_pos[1];
                
                // to move right and up
                if (current_pos[0] < points[i][0] && current_pos[1] < points[i][1]) {
                    current_pos[0] += min(abs(a),abs(b));
                    current_pos[1] += min(abs(a),abs(b));
                    result += min(abs(a),abs(b));
                }
                // to move right and down
                else if (current_pos[0] < points[i][0] && current_pos[1] > points[i][1]) {
                    current_pos[0] += min(abs(a),abs(b));
                    current_pos[1] += - min(abs(a),abs(b));
                    result += min(abs(a),abs(b));
                }
                // to move left and up
                else if (current_pos[0] > points[i][0] && current_pos[1] < points[i][1]) {
                    
                    current_pos[0] += - min(abs(a),abs(b));
                    current_pos[1] += min(abs(a),abs(b));
                    result += min(abs(a),abs(b));
                }
                // to move left and down
                else if (current_pos[0] > points[i][0] && current_pos[1] > points[i][1]) {
                    current_pos[0] += - min(abs(a),abs(b));
                    current_pos[1] += - min(abs(a),abs(b));
                    result += min(abs(a),abs(b));
                }
            }
            
            if (current_pos[0] == points[i][0] && current_pos[1] == points[i][1]) {
                continue;
            }
            
            // aligned by the x axis
            if (current_pos[0] == points[i][0]) {
                result += abs(current_pos[1] - points[i][1]);
                current_pos[1] = points[i][1];
            }
            
            // aligned by the y axis
            if (current_pos[1] == points[i][1]) {
                result += abs(current_pos[0] - points[i][0]);
                current_pos[0] = points[i][0];
            }
            
        }
        
        return result;
    }
};