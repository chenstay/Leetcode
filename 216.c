class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> temp;
        vector<int> candidates({1,2,3,4,5,6,7,8,9});
        dfs(res,temp,n,candidates,0,k);
        return res;
    }
private:
    void dfs(vector<vector<int>>& res,vector<int>& temp, int target, vector<int>& candidates, int index,int k){
        if(target==0&&temp.size()==k){
            if(find(res.begin(),res.end(),temp)==res.end())res.push_back(temp);
        }
        for(int i=index;i<candidates.size()&&target>=candidates[index];i++){
            temp.push_back(candidates[i]);
            dfs(res, temp, target-candidates[i], candidates, i+1,k);
            temp.pop_back();
        }
    }
};
