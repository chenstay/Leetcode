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
    int countNodes(TreeNode* root) {
        if(!root)return 0;
        TreeNode* pleft=root,*pright=root;
        int l=0,r=0;
        while(pleft){
            l++;
            pleft=pleft->left;
        }
        while(pright){
            r++;
            pright=pright->right;
        }
        if(l==r)return pow(2,l)-1;
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};
