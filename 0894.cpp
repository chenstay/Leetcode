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
    vector<TreeNode*> allPossibleFBT(int N) {
        vector<TreeNode*> res;
        if(N%2==0)return res;
        TreeNode* tmp=new TreeNode(0);
        res.push_back(tmp);
        if(N==1)return res;
        res.pop_back();
        //N>=3
        for(int i=1;i<N-1;i+=2){
            //left=i right=N-1-i
            for(auto lef:allPossibleFBT(i)){
                for(auto righ:allPossibleFBT(N-1-i)){
                    tmp->left=lef;
                    tmp->right=righ;
                    res.push_back(tmp);
                    tmp=new TreeNode(0);
                }
            }
        }
        return res;
    }
};
