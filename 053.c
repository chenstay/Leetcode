class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        if(n==1)return nums[0];
        if(n==2)return max(nums[0],max(nums[1],nums[0]+nums[1]));
        int res=maxloc(nums,0);
        for(int i=1;i<n;i++){
            if(maxloc(nums,i)>res)res=maxloc(nums,i);
        }
        return res;
    }
public:
    int maxloc(vector<int>& nums,int loc){
        int n=nums.size();
        int sum=nums[loc];
        int largest=sum;
        int length1=loc;
        for(int i=loc+1;i<n;i++){
            sum+=nums[i];
            if(sum>=largest)largest=sum;
        }
        for(int i=loc-1;i>=0;i--){
            sum+=nums[i];
            if(sum>=largest)largest=sum;
        }
        return largest;
    }
};
