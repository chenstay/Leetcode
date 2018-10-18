class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        int left=0;
        int length=1;
        for(int i=1;i<n;i++){
            if(nums[i]<=nums[i-1]){
                left=i;
            }
            length=max(length,i-left+1);
        }
        return length;
    }
};
