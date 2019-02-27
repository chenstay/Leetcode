//DFS
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        int res=0;
        int total=0;
        MyFind(nums,S,0,total,res);
        return res;
    }
    void MyFind(vector<int>& nums,int S,int index,int total,int& res){
        if(index==nums.size()&&total==S)res++;
        if(index<nums.size()){
            MyFind(nums,S,index+1,total+nums[index],res);
            MyFind(nums,S,index+1,total-nums[index],res);
        }
    }
};
//dp
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        int n=nums.size();
        vector<unordered_map<int,int>> dp(n+1);
        dp[0][0]=1;
        for(int i=0;i<n;i++)
            for(auto& a:dp[i]){
                int sum=a.first;int cnt=a.second;
                dp[i+1][sum+nums[i]]+=cnt;
                dp[i+1][sum-nums[i]]+=cnt;
            }
        return dp[n][S];
    }
};
//
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        unordered_map<int,int> dp;
        dp[0]=1;
        for(auto num:nums){
            unordered_map<int,int> t;
            for(auto& a:dp){
                int sum=a.first;int cnt=a.second;
                t[sum+num]+=cnt;
                t[sum-num]+=cnt;
            }
            dp=t;
        }
        return dp[S];
    }
};
