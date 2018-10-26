class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==0)return 0;
        int res=1;
        int tmp=1;
        int i=1;
        int ini=nums[0];
        while(i<n){
            if(nums[i]==ini+1){
                tmp++;
                ini=nums[i];
                i++;
            }
            else if(nums[i]==ini){
                i++;
            }
            else{
                res=max(res,tmp);
                tmp=1;
                ini=nums[i];
                i++;
            }
        }
        res=max(res,tmp);
        return res;
    }
};
