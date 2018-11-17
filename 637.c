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
    vector<double> averageOfLevels(TreeNode* root) {
        if(!root)return {};
        vector<double> res;
        queue<TreeNode*> q; //定义一个队列，数据类型是二叉树指针，不要仅是int！！不然无法遍历
        q.push(root);
        while (!q.empty()){
            double sum=0;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode *t = q.front(); q.pop();
                sum += t->val;
                if (t->left) q.push(t->left);
                if (t->right) q.push(t->right);
            }
            res.push_back(sum/n);
       }
       return res;
    }
};
