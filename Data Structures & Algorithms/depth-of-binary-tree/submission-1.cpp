/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    int depth(TreeNode* root){
        if(root==NULL) return 0;
        int lm,rm;
        lm = depth(root->left);
        rm = depth(root->right);
        return 1+max(lm,rm);
    }
    int maxDepth(TreeNode* root) {
        return depth(root);
        
    }
};
