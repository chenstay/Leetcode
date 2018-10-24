class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        vector<vector<int>> res;
        vector<int> tmp;
        for(int i=0;i<n-2;i++){
            if(i>0&&nums[i]==nums[i-1])continue;
            int target=0-nums[i];
            int j=i+1;
            int k=n-1;
            while(j<k){
                if((nums[j]+nums[k])==target){
                    tmp.push_back(nums[i]);
                    tmp.push_back(nums[j]);
                    tmp.push_back(nums[k]);
                    res.push_back(tmp);
                    tmp.clear();
                    j++;
                    k--;
                    while(nums[j]==nums[j-1]&&j<k)j++;
                    while(nums[k]==nums[k+1]&&j<k)k--;
                }
                else if((nums[j]+nums[k])<target){j++;}
                else{
                    k--;
                }
            }
        }
        return res;
    }
};
