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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(!root)return {};
        queue<TreeNode*> q;
        q.push(root);
        vector<vector<int>> res;
        while(!q.empty()){
            int n=q.size();
            vector<int> tmp;
            for(int i=0;i<n;i++){
                TreeNode* t=q.front();
                tmp.push_back(t->val);
                q.pop();
                if (t->left) q.push(t->left);
                if (t->right) q.push(t->right);
            }
            res.insert(res.begin(),tmp);
        }
        return res;
    }
};
