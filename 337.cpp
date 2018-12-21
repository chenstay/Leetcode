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
    int rob(TreeNode* root) {
        if(!root)return 0;
        int res=root->val;
        if(!root->left&&!root->right)return res;
        if(root->left)res+=rob(root->left->right)+rob(root->left->left);
        if(root->right)res+=rob(root->right->right)+rob(root->right->left);
        return max(res,rob(root->left)+rob(root->right));
    }
};
