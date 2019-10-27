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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return helper(preorder,0,(int)preorder.size()-1,inorder,0,(int)inorder.size()-1);
    }
    TreeNode* helper(vector<int>& inorder,int l1,int r1,vector<int>& postorder,int l2,int r2){
        if(l1>r1||l2>r2)return NULL;
        //find i
        int i=0;
        for(int j=0;j<postorder.size();j++){
            if(postorder[j]==inorder[l1]){i=j;break;}
        }
        //
        TreeNode* res=new TreeNode(inorder[l1]);
        res->left=helper(inorder,l1+1,l1+i-l2,postorder,l2,i-1);
        res->right=helper(inorder,l1+i-l2+1,r1,postorder,i+1,r2);
        return res;
    }
};
