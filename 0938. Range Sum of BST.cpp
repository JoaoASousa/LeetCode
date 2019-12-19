/*
Runtime: 156 ms, faster than 41.58% of C++ online submissions for Range Sum of BST.
Memory Usage: 41.1 MB, less than 100.00% of C++ online submissions for Range Sum of BST.
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
    int rangeSumBST(TreeNode* root, int L, int R) {
        int result = 0;
        if (root == nullptr) return 0;
        if (root->val < L) {
            result += rangeSumBST(root->right, L, R);
        }
        else if (root->val > R) {
            result += rangeSumBST(root->left, L, R);
        }
        else {
            result += root->val;
            result += rangeSumBST(root->right, L, R);
            result += rangeSumBST(root->left, L, R);
        }
            
        return result;
    }
};