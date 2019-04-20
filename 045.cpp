class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int cur=0;
        int res=0;
        int i=0;
        while(cur<n-1){
            res++;
            int pre=cur;
            for(;i<=pre;i++){
                cur=max(cur,nums[i]+i);
            }
            if(cur==pre)return -1;
        }
        return res;
    }
};
