class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return -1;
        if(n==1)return 0;
        int left=0;
        int right=0;
        for(int i=1;i<n;i++){
            right+=nums[i];
        }
        if(left==right)return 0;
        for(int i=0;i<n;i++){
            left+=nums[i];
            right-=nums[i+1];
            if(left==right)return i+1;
        }
        return -1;
    }
};
