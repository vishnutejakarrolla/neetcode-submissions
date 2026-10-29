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
private:
    int mheight = 0;
    int diameter(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int lm = diameter(root->left);
        int rm = diameter(root->right);
        mheight = max(lm+rm,mheight);
        return 1+max(lm,rm);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        diameter(root);
        return mheight;
        
    }
};
