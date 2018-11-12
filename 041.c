class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        if(nums.size()==0)return 1;
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        int pos=0;
        while(nums[pos]<=0)pos++;
        if(nums[pos]!=1)return 1;
        for(int i=pos+1;i<nums.size();i++){
            if(nums[i]!=i-pos+1)return i-pos+1;
        }
        return nums.size()-pos+1;
    }
};
