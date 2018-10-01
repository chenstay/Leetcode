class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==val)cnt++;
        }
        for(int i=n-1;i>0;i--){
            if(nums[i-1]==val)
            {
                for(int j=i;j<n;j++)
                {
                    swap(nums[j-1],nums[j]);
                }
            }
        }
        return n-cnt;
    }
};
