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
    int findBottomLeftValue(TreeNode* root) {
        if(!root)return 0;
        int max=1;
        int res=root->val;
        dfs(root,1,max,res);
        return res;
    }
    void dfs(TreeNode* root,int depth,int& max,int& res){
        if(!root)return;
        if(depth>max){
            max=depth;
            res=root->val;
        }
        dfs(root->left,depth+1,max,res);
        dfs(root->right,depth+1,max,res);
        
    }
};
