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
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> tmp;
        inorder(root,tmp);
        if(tmp.size()==0)return root;
        TreeNode* res=new TreeNode(tmp[0]);
        TreeNode* cur=res;
        for(int i=1;i<tmp.size();i++){
            cur->right=new TreeNode(tmp[i]);
            cur=cur->right;
        }
        return res;
    }
private:
    void inorder(TreeNode* root,vector<int>& tmp){
        if(!root)return;
        inorder(root->left,tmp);
        tmp.push_back(root->val);
        inorder(root->right,tmp);
    }
};
//https://blog.csdn.net/qq_20633793/article/details/82314404
