class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> res;
        vector<int> temp;
        dfs(res, temp, target, candidates, 0);
        return res;
    }
    void dfs(vector<vector<int>>& res,vector<int>& temp, int target, vector<int>& candidates, int index){
        if(target==0){
            if(find(res.begin(),res.end(),temp)==res.end())res.push_back(temp);
        }
        for(int i=index;i<candidates.size()&&target>=candidates[index];i++){
            temp.push_back(candidates[i]);
            dfs(res, temp, target-candidates[i], candidates, i+1);
            temp.pop_back();
        }
    }
};
