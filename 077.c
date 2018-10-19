class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        //选取1-n里的k个数
        vector<vector<int>> res;
        vector<int> temp;
        dfs(res,temp,n,k,1);
        return res;
    }
    void dfs(vector<vector<int>>& res,vector<int>& temp,int n,int k,int index){
        if(temp.size()==k){
            res.push_back(temp);
        }
        for(int i=index;i<n+1;i++){
            temp.push_back(i);
            dfs(res,temp,n,k,i+1);
            temp.pop_back();
        }
    }
};
