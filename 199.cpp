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
        queue<TreeNode*> q;
        q.push(root);
        vector<int> res;
        if(!root)return res;
        while(!q.empty()){
            res.push_back(q.back()->val);
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* tmp=q.front();
                q.pop();
                if(tmp->left)q.push(tmp->left);
                if(tmp->right)q.push(tmp->right);
            }            
        }
        return res;
        
    }
};
