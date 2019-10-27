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
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        return helper(preorder,0,(int)preorder.size()-1);
    }
    TreeNode* helper(vector<int>& preorder,int left,int right){
        if(left>right)return NULL;
        //find i
        int i=left;
        for(;i<=right;i++){
            if(preorder[i]>preorder[left])break;
        }
        //
        TreeNode* res=new TreeNode(preorder[left]);
        res->left=helper(preorder,left+1,i-1);
        res->right=helper(preorder,i,right);
        return res;
    }
};
