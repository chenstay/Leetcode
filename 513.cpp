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
    int findBottomLeftValue(TreeNode* root) {
        if(!root)return 0;
        int max=1;
        int res=root->val;
        dfs(root,1,max,res);
        return res;
    }
    void dfs(TreeNode* root,int depth,int& max,int& res){
        if(!root)return;
        if(depth>max){
            max=depth;
            res=root->val;
        }
        dfs(root->left,depth+1,max,res);
        dfs(root->right,depth+1,max,res);
        
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
    int findBottomLeftValue(TreeNode* root) {
        if(!root)return 0;
        queue<TreeNode*> q;
        q.push(root);
        int res=0;
        while(!q.empty()){
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* t=q.front();
                q.pop();
                if(i==0)res=t->val;
                if(t->left)q.push(t->left);
                if(t->right)q.push(t->right);
            }
        }
        return res;
    }
};
