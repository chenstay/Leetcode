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
    bool isUnivalTree(TreeNode* root) {
        if(!root||(!root->left&&!root->right))return true;
        if(!isUnivalTree(root->right)||!isUnivalTree(root->left))return false;
        if(root->left&&root->left->val!=root->val)return false;
        if(root->right&&root->right->val!=root->val)return false;
        return true;
    }
};
