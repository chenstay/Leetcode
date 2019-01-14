class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        vector<int> maxx(n,0);
        vector<int> minn(n,0);
        maxx[0]=nums[0];
        minn[0]=nums[0];
        int res=nums[0];
        for(int i=1;i<n;i++){
            maxx[i]=max(minn[i-1]*nums[i],max(maxx[i-1]*nums[i],nums[i]));
            minn[i]=min(minn[i-1]*nums[i],min(maxx[i-1]*nums[i],nums[i]));
            res=max(res,maxx[i]);
        }
        return res;
   
