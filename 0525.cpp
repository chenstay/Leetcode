class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int,int> m{{0,-1}};
        int sum=0;
        int res=0;
        for(int i=0;i<nums.size();i++){
            sum+=(nums[i]==0)?-1:1;
            if(m.count(sum)){
                res=max(res,i-m[sum]);
            }
            else m[sum]=i;
        }
        return res;
    }
};
