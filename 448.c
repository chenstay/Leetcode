class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int> res;
        if(nums.size()==0)return res;
        if(nums[0]!=1)res.push_back(1);
        if(nums.size()==1)return res;
        for(int i=0;i<nums.size();i++){
            while(nums[i]!=(i+1)&&nums[i]!=nums[nums[i]-1]){
                swap(nums[i],nums[nums[i]-1]);
            }
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=(i+1))res.push_back(i+1);
        }
        return res;
    }
};
