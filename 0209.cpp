class Solution {
public:
    int minSubArrayLen(int s, vector<int>& nums) {
        int left=0;
        int len=INT_MAX;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>=s){
                len=min(len,i-left+1);
                sum-=nums[left];
                left++;
            }
        }
        return len==INT_MAX?0:len;
    }
};
