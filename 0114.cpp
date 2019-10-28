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
    void flatten(TreeNode* root) {
        if(!root)return ;
        if(root->left)flatten(root->left);
        if(root->right)flatten(root->right);
        TreeNode* tmp=root->right;
        root->right=root->left;
        root->left=NULL;
        while(root->right)root=root->right;
        root->right=tmp;
    }
};


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
    void flatten(TreeNode* root) {
        if(!root)return ;
        TreeNode* cur=root;
        while(cur){
            if(cur->left){
                TreeNode* tmp=cur->left;
                while(tmp->right)tmp=tmp->right;
                tmp->right=cur->right;
                cur->right=cur->left;
                cur->left=NULL;
            }
            cur=cur->right;
        }
    }
};
