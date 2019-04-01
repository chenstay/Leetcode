class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int n=nums.size();
        int res=0;
        for(int i=0;i<32;i++){
            int cnt=0;
            for(auto num:nums){
                if(num&(1<<i))cnt++;
            }
            res+=cnt*(n-cnt);
        }
        return res;
    }
};
