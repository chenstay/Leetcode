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
    int kthSmallest(TreeNode* root, int k) {
        int left=depth(root->left);
        int right=depth(root->right);
        if(k<=left)return kthSmallest(root->left,k);
        else if(k==left+1)return root->val;
        else return kthSmallest(root->right,k-left-1);
    }
    int depth(TreeNode* root){
        if(!root)return 0;
        return 1+depth(root->left)+depth(root->right);
    }
};
