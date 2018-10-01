class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        bool res=false;
        int n=nums.size();
        if(n<2)return res;
        if(n==2&&nums[0]==nums[1])return true;
        for(int i=1;i<n-1;i++)
        {
            if(nums[i]==nums[i-1]||nums[i]==nums[i+1])res=true;
        }
        return res;
    }
};
