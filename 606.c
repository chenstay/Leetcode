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
    string tree2str(TreeNode* t) {
        string res="";
        if(!t)return res;
        res+=to_string(t->val);
        if(t->left){
            res+='(';
            res+=tree2str(t->left);
            res+=')';
        }
        if(!t->left&&t->right)res+="()";
        if(t->right){
            res+='(';
            res+=tree2str(t->right);
            res+=')';
        }
        return res;
    }
};
