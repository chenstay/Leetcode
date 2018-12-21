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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> res;
        if(!root)return res;
        for(auto a:postorderTraversal(root->left))res.push_back(a);
        for(auto b:postorderTraversal(root->right))res.push_back(b);
        res.push_back(root->val);
        return res;
    }
};
