class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        vector<int> dp={0,0,0},dp1;
        for(int num:nums){
            dp1=dp;
            for(auto i:dp1){
                dp[(i+num)%3]=max(dp[(i+num)%3],i+num);
            }
        }
        return dp[0];
    }
};
