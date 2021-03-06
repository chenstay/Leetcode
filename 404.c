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
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root)return 0;
        int res=0;
        if(root->left&&!root->left->right&&!root->left->left)res+=root->left->val;
        res+=sumOfLeftLeaves(root->left)+sumOfLeftLeaves(root->right);
        return res;
    }
};
