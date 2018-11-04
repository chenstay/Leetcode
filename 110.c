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
    bool isBalanced(TreeNode* root) {
        if(!root)return true;
        return abs(dep(root->left)-dep(root->right))<=1&&isBalanced(root->left)&&isBalanced(root->right);
    }
private:
    int dep(TreeNode* root){
        if(!root)return 0;
        return max(dep(root->left),dep(root->right))+1;
    }
};
