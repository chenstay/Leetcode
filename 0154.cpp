class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=n-1;
        int mid=0;
        while(nums[left]>=nums[right]){
            if(right-left==1){
                mid=right;
                break;
            }
            int mid=left+(right-left)/2;
            if(nums[mid]==nums[left]&&nums[mid]==nums[right])return find(nums,left,right);
            else if(nums[mid]>=nums[left])left=mid;
            else if(nums[mid]<=nums[right])right=mid;
        }
        return nums[mid];
        
    }
    int find(vector<int>& nums,int left,int right){
        int res=nums[left];
        for(int i=left+1;i<=right;i++){
            res=min(res,nums[i]);
        }
        return res;
    }
};
