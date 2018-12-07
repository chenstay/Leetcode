class Solution {
public:
    vector<int> findFrequentTreeSum(TreeNode* root) {
        map<int,int> m;
        vector<int> res;
        int cnt=0;
        dfs(root,m,cnt,res);
        return res;
    }
    int dfs(TreeNode* root,map<int,int>& m,int& cnt,vector<int>& res){
        if(!root)return 0;
        int sum=dfs(root->left,m,cnt,res)+dfs(root->right,m,cnt,res)+root->val;
        m[sum]++;
        if(m[sum]>=cnt){
            if(m[sum]>cnt)res.clear();
            res.push_back(sum);
            cnt=m[sum];
        }
        return sum;
    }
};
