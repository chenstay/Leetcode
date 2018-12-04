class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int> > res;
        vector<int> tmp;
        vector<int> visited(nums.size(), 0);
        permuteDFS(res,tmp,nums,visited,0);
        return res;
    }
    void permuteDFS(vector<vector<int>>& res,vector<int>& tmp,vector<int>& nums,vector<int>& visited,int index){
        if(tmp.size()==nums.size())res.push_back(tmp);
        for(int i=0;i<nums.size();i++){
            if(visited[i]==0){
                visited[i]=1;
                tmp.push_back(nums[i]);
                permuteDFS(res,tmp,nums,visited,index+1);
                visited[i]=0;
                tmp.pop_back();
            }
        }
        
    }
}
