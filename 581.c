class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> myNums=nums;
        vector<int> res;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]!=myNums[i])res.push_back(i);
        }
        if(res.size()==0)return 0;
        auto max=max_element(res.begin(),res.end());
        auto min=min_element(res.begin(),res.end());
        return *max-*min+1;
    }
};
