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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        if(!root)return res;
        /*Recursive 
        if(root->left){
            for(auto num:inorderTraversal(root->left))res.push_back(num);
        }
        res.push_back(root->val);
        if(root->right){
            for(auto num:inorderTraversal(root->right))res.push_back(num);
        }
        return res;*/
        //iterative
        stack<TreeNode*> tmp;
        while(root){
            tmp.push(root);
            root=root->left;
        }
        while(!tmp.empty()){
            TreeNode* t=tmp.top();
            tmp.pop();
            res.push_back(t->val);
            if(t->right){
                t=t->right;
                while(t){
                    tmp.push(t);
                    t=t->left;
                }
            }
        }
        return res;
    }
};
