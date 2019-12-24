/*
Runtime: 8 ms, faster than 75.00% of C++ online submissions for Find Numbers with Even Number of Digits.
Memory Usage: 9.1 MB, less than 100.00% of C++ online submissions for Find Numbers with Even Number of Digits.
*/
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        
        int counter = 0;
        for (int & n : nums) {
            if ( ((to_string(n)).length() % 2) == 0) counter++;
        }
        
        return counter;
    }
    
};


/*
Runtime: 20 ms, faster than 50.00% of C++ online submissions for Find Numbers with Even Number of Digits.
Memory Usage: 8.8 MB, less than 100.00% of C++ online submissions for Find Numbers with Even Number of Digits.
*/
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int counter = 0;
        for (int & n : nums) {
            if ( ((to_string(n)).length() % 2) == 0) counter++;
        }
        
        return counter;
    }
    
};