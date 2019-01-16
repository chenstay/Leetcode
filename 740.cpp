class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        int take=0;
        int skip=0;
        vector<int> sum(10001,0);
        for(auto num:nums)sum[num]+=num;
        for(int i=0;i<10001;i++){
            int CurTake=skip+sum[i];
            int CurSkip=max(take,skip);
            take=CurTake;
            skip=CurSkip;
        }
        return max(take,skip);
    }
};
