class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        if(nums.empty())return 0;
        int left=0,right=0,sum=0,n=nums.size(),len=n+1;
        while(right<n){
            while(sum<s&&right<n){
                sum+=nums[right++];
            }
            while(sum>=s){
                len=min(len,right-left);
                sum-=nums[left++];
            }
        }
        return len==n+1?0:len;
    }
};
