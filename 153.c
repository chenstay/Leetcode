class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1])return nums[i];
        }
        return nums[0];
    }
};

class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=n-1;
        vector<int> a=nums;
        sort(a.begin(),a.end());
        while(left<right){
            int mid=left+(right-left)/2;
            if(nums[mid]>a[mid])left=mid+1;
            else right=mid;
        }
        return nums[left];
    }
};
