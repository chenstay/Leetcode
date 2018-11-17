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
private:
    unordered_map<int,int> m;
public:
    vector<int> findMode(TreeNode* root) {
        vector<int> res;
        int mx = 0;
        unordered_map<int, int> m; 
        order(root, m, mx);
        for (auto a : m) {
            if (a.second == mx) {
                res.push_back(a.first);
            }
        }
        return res;
    }
    void order(TreeNode* root,unordered_map<int,int>& m, int& mx){
        if(!root)return;
        if(root->left)order(root->left,m,mx);
        if(root->right)order(root->right,m,mx);
        mx=max(mx,++m[root->val]);
    }
};
