class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size();
        if(n<3)return false;
        vector<int> dp(n,1);
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i])dp[i] = max(dp[i], dp[j] + 1);
                if(dp[i]>=3)return true;
            }
        }
        return false;
    }
};
