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
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        unordered_map<string,int> m;
        vector<TreeNode*> res;
        helper(root,m,res);
        return res;
    }
    string helper(TreeNode* root,unordered_map<string,int>& m,vector<TreeNode*>& res){
        if(!root)return "#";
        string str=to_string(root->val)+','+helper(root->left,m,res)+','+helper(root->right,m,res);
        if(m[str]==1)res.push_back(root);
        m[str]++;
        return str;
    }
};
