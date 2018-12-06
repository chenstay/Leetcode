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
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if(!s)return false;
        if(isIdentical(s,t))return true;
        return isSubtree(s->left,t)||isSubtree(s->right,t);
        
    }
    bool isIdentical(TreeNode* s, TreeNode* t) {
        if(!s&&!t)return true;
        if(!s||!t||s->val!=t->val)return false;
        return isIdentical(s->left,t->left)&&isIdentical(s->right,t->right);
    }
};
