class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1]){
                cnt++;
            }
            else{
                if(cnt>=((nums.size()+1)/2))return nums[i];
                else cnt=1;
            }
        }
    }
};
