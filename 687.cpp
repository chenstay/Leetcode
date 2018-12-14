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
    int longestUnivaluePath(TreeNode* root) {
        if(!root)return 0;
        int res=0;
        dfs(root,res);
        return res;
    }
    int dfs(TreeNode* root,int& res){
        if(!root)return 0;
        int left=dfs(root->left,res);
        int right=dfs(root->right,res);
        left=root->left&&root->left->val==root->val?left+1:0;
        right=root->right&&root->right->val==root->val?right+1:0;
        res=max(res,left+right);
        return max(left,right);
    }
};
