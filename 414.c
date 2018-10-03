class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int temp=nums[n-1];
        int flag=1;
        for(int i=n-1;i>=0;i--){
            if(nums[i]!=temp){temp=nums[i];flag++;}
            if(flag==3)return temp;
        }
        if(flag!=3)return nums[n-1];
    }
};
