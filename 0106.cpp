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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        return helper(inorder,0,(int)inorder.size()-1,postorder,0,(int)postorder.size()-1);
    }
    TreeNode* helper(vector<int>& inorder,int l1,int r1,vector<int>& postorder,int l2,int r2){
        if(l1>r1||l2>r2)return NULL;
        //find i
        int i=0;
        for(int j=0;j<inorder.size();j++){
            if(inorder[j]==postorder[r2]){i=j;break;}
        }
        //
        TreeNode* res=new TreeNode(postorder[r2]);
        res->left=helper(inorder,l1,i-1,postorder,l2,l2+i-l1-1);
        res->right=helper(inorder,i+1,r1,postorder,l2+i-l1,r2-1);
        return res;
    }
};
