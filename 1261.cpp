/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class FindElements {
public:
    FindElements(TreeNode* root) {
        //recover
        if(!root)return;
        root->val=0;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            TreeNode* t=q.front();q.pop();
            nums.insert(t->val);
            if(t->left){
                t->left->val=t->val*2+1;
                q.push(t->left);
            }
            if(t->right){
                t->right->val=t->val*2+2;
                q.push(t->right);
            }
        }
    }
    
    bool find(int target) {
        return nums.find(target)!=nums.end();
        
    }
private:
    unordered_set<int> nums;
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
