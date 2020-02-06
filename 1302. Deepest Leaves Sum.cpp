/*
Runtime: 40 ms, faster than 96.55% of C++ online submissions for Deepest Leaves Sum.
Memory Usage: 31.6 MB, less than 100.00% of C++ online submissions for Deepest Leaves Sum.
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    map<int,int> sumDepthMap;
    
    void addToSum(TreeNode* root, int depth) {
        if (root == NULL) return ;
        if (root->left == NULL && root->right == NULL) sumDepthMap[depth] += root->val;
        
        addToSum(root->left, depth + 1);
        addToSum(root->right, depth + 1);
    }
    
    int deepestLeavesSum(TreeNode* root) {
        int depth = 0;
        
        addToSum(root, depth);
        
        return sumDepthMap.rbegin()->second;
    }
};