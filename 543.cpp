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
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root)return 0;
        int res=0;
        dfs(root,res);
        return res;
    }
    int dfs(TreeNode* root,int& res){
        if(!root)return 0;
        int left=dfs(root->left,res);
        int right=dfs(root->right,res);
        res=max(res,left+right);
        return max(left,right)+1;
    }
};
