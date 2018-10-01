class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(n<1)return 0;
        if(n==1)return 1;
        int cnt=0;
        for(int i=1;i<n;i++)
        {
            if(nums[cnt]!=nums[i])
            {
                nums[++cnt]=nums[i];
            }
        }
        return ++cnt;
    }
};
