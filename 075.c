class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int left=0,right=n-1;
        for(int i=0;i<=right;i++){
            if(nums[i]==0)swap(nums[i],nums[left++]);
            else if(nums[i]==2)swap(nums[i--],nums[right--]);
        }
    }
};

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        vector<int> cnt(3,0);
        for(auto num:nums){
            cnt[num]++;
        }
        int index=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<cnt[i];j++){
                nums[index++]=i;
            }
        }
    }
};
