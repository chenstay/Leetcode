class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        int n=nums.size();
        vector<long> sums(n+1,0);
        for(int i=1;i<=n;i++){
            sums[i]=sums[i-1]+long(nums[i-1]);//sums[n]=0...n-1
        }
        vector<vector<long>> dp(m+1,vector<long>(n+1,INT_MAX));
        dp[0][0]=0;
        for(int i=1;i<=m;i++)
            for(int j=1;j<=n;j++)
                for(int k=i-1;k<j;k++)
                {
                    dp[i][j]=min(dp[i][j],max(dp[i-1][k],sums[j]-sums[k]));
                }
        return dp[m][n];
    }
};
