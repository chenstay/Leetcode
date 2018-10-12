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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> res1;
        vector<int> res2;
        leafValue(root1,res1);
        leafValue(root2,res2);
        if(res1==res2)return true;
        else return false;
    }
    void leafValue(TreeNode* root,vector <int> &res){
        if(root==NULL)return ;
        if(root->left!=NULL)leafValue(root->left,res);
        if(root->right!=NULL)leafValue(root->right,res);
        if(root->left==NULL&&root->right==NULL)res.push_back(root->val);
        return ;
    }
};
