/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
public:
    BSTIterator(TreeNode* root) {
        while(root){
            tmp.push(root);
            root=root->left;
        }
    }
    
    /** @return the next smallest number */
    int next() {
        TreeNode* t=tmp.top();
        tmp.pop();
        int res=t->val;
        if(t->right){
            t=t->right;
            while(t){
                tmp.push(t);
                t=t->left;
            }
        }
        return res;
    }
    
    /** @return whether we have a next smallest number */
    bool hasNext() {
        return !tmp.empty();
    }
private:
    stack<TreeNode*> tmp;
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
