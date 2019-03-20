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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> right;
        if(!root)return right;
        if(!root->left&&!root->right)return {root->val};
        right=rightSideView(root->right);
        vector<int> res=right;
        res.insert(res.begin(),root->val);
        vector<int> left=rightSideView(root->left);
        for(int i=0;i<left.size();i++){
            if(i>=right.size())res.push_back(left[i]);
        }
        return res;
    }
};
