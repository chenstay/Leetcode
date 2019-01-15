class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n<1)return 0;
        if(n==1)return nums[0];
        return max(roob(nums,0,n-1),roob(nums,1,n)); 
    }
    int roob(vector<int>& nums,int left,int right) {
        if((right-left)<=1)return nums[left];
        int res=nums[left];
        vector<int> dp(right,0);
        dp[left]=nums[left];
        dp[left+1]=max(nums[left],nums[left+1]);
        for(int i=left+2;i<right;i++){
            dp[i]=max(dp[i-2]+nums[i],dp[i-1]);
        }
        return dp.back();
    }    
};
