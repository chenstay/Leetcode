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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        if(!root)return res;
        if(!root->left&&!root->right)res.push_back(to_string(root->val));
        if(root->left)
            for(auto a:binaryTreePaths(root->left)){
                string tmp=to_string(root->val)+"->"+a;
                res.push_back(tmp);
            }  
        if(root->right)
            for(auto a:binaryTreePaths(root->right))
                res.push_back(to_string(root->val)+"->"+a);
        return res;
    }
};
