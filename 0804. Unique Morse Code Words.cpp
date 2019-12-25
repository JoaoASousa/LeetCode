/*
Runtime: 4 ms, faster than 82.56% of C++ online submissions for Unique Morse Code Words.
Memory Usage: 9 MB, less than 69.23% of C++ online submissions for Unique Morse Code Words.
*/
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        
        vector<string> table = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        set<string> transf;
        
        string word_m;
        
        for (string & word : words) {
            word_m = "";
            for (char & c : word) {
                word_m += table[c - 97];
            }
            
            transf.insert(word_m);
        }
        
        return transf.size();
    }
};