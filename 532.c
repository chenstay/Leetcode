class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int cnt=0;
        if(n<2)return 0;
        if(k==0)
        {
            if(nums[0]==nums[1])cnt++;
            for(int i=1;i<n;i++){
                if(nums[i]==nums[i+1]&&nums[i]!=nums[i-1])cnt++;
            }
            return cnt;
        }
        cnt=0;
        for(int i=1;i<n;i++){
            if((nums[i]-nums[0])==k&&nums[i]!=nums[i-1])cnt++;
        }
        for(int i=1;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if((nums[j]-nums[i])==k&&nums[i]!=nums[i-1]&&nums[j]!=nums[j-1])cnt++;
            }
        }
        return cnt;
    }
};
