class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n==0) return 0;
        vector<int> dp(target+1, 0);
        dp[0] = 1;
        for(int i =1; i <= target; i++)
        {
            for(int j=0;j<n;j++)if(nums[j] <= i) dp[i] += dp[i-nums[j]];
        }
        return dp[target];
    }
    //dp[i]是target=i时所得的output
    //dp[i] = sum(dp[i - nums[j]])  (i-nums[j] > 0,j=0...n)
};
//DP problem
