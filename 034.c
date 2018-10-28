class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        //must二分法
        int n=nums.size();
        if(n==0)return {-1,-1};
        int left=0;
        int right=n-1;
        int mid=0;
        bool answer=false;
        while(left<right){
            mid=left+(right-left)/2;
            if(nums[mid]>target)right=mid;
            if(nums[mid]<target)left=mid+1;
            if(nums[mid]==target){
                answer=true;
                break;
            }
        }
        if(left==right&&nums[left]==target)return {left,left};
        int r=0;int l=0;
        for(int i=mid;i<n;i++){
            if(nums[i]==target)r=i;
            else{break;}
        }
        for(int i=mid;i>=0;i--){
            if(nums[i]==target)l=i;
            else{break;}
        }
        if(answer)return{l,r};
        return {-1,-1};
    }
};
