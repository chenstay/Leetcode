class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
       vector<vector<int> > res(1);
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); i++) {
            int size = res.size();
            for (int j = 0; j < size; j++) {
                res.push_back(res[j]);//保持之前的集合
                res.back().push_back(nums[i]);//添加新的数字
            }
        }
        return res;
    }
};

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>result;
        vector<int>path;
        DFS(result,path,nums,0);
        return result;
    }
    
    void DFS(vector<vector<int>>& result, vector<int>& path, vector<int>& nums, int pos){
        result.push_back(path);
        for(int i=pos;i<nums.size();i++){
            path.push_back(nums[i]);
            DFS(result,path,nums,i+1);
            path.pop_back();
        }
    }
};
//ref https://www.cnblogs.com/grandyang/p/4309345.html
