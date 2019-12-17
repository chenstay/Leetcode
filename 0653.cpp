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
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> st;
        return helper(root,k,st);
    }
    bool helper(TreeNode* root, int k,unordered_set<int>& st){
        if(!root)return false;
        if(st.count(k-root->val))return true;
        st.insert(root->val);
        return helper(root->left, k, st) || helper(root->right, k, st);
    }
};
