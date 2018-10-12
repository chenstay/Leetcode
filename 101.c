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
    bool isSymmetric(TreeNode* root) {
        if(!root)return true;
        return judge(root->left,root->right);
    }
    bool judge(TreeNode* node1,TreeNode* node2){
        if(!node1&&!node2)return true;
        if(!node1||!node2)return false;
        if(node1->val!=node2->val)return false;
        return judge(node1->left,node2->right)&&judge(node1->right,node2->left);
    }
};
