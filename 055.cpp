class Solution {
public:
    bool canJump(vector<int>& nums) {
        vector<int> dp(nums.size(), 0);
        for (int i = 1; i < nums.size(); ++i) {
            dp[i] = max(dp[i - 1], nums[i - 1]) - 1;
            if (dp[i] < 0) return false;
        }
        return true;
    }
};
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int reach=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(reach<i)return false;
            if(reach>=n-1)return true;
            reach=max(reach,nums[i]+i);
        }
        return reach>=n-1;
    }
};
