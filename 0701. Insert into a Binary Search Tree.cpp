/*
Runtime: 104 ms, faster than 8.30% of C++ online submissions for Insert into a Binary Search Tree.
Memory Usage: 32.9 MB, less than 75.00% of C++ online submissions for Insert into a Binary Search Tree.
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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        
        if (root->val > val) {
            if (root->left == NULL) {
                root->left = new TreeNode(val);
            }
            else {
                insertIntoBST(root->left, val);
            }
        }
        
        else {
            if (root->right == NULL) {
                root->right = new TreeNode(val);
            }
            else {
                insertIntoBST(root->right, val);
            }
        }
        
        return root;
    }
};