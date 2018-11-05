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
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int>> res;
        if(!root)return res;
        if(sum==root->val&&!root->left&&!root->right)return {{root->val}};
        if(root->left){
            for(auto tmp:pathSum(root->left,sum-root->val)){
                tmp.insert(tmp.begin(),root->val);
                res.push_back(tmp);
            }
        }
        if(root->right){
            for(auto tmp:pathSum(root->right,sum-root->val)){
                tmp.insert(tmp.begin(),root->val);
                res.push_back(tmp);
            }
        }
        return res;
    }
};
