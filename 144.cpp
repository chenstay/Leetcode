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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> res;
        stack<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* t=q.top();q.pop();
            if(!t)continue;//empty
            res.push_back(t->val);
            q.push(t->right);
            q.push(t->left);
        }
        return res;
    }
};
