class Solution {
public:
    bool makesquare(vector<int>& nums) {
        if(nums.size()==0)return false;
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum%4!=0)return false;
        int target=sum/4;
        vector<int> su(4,0);
        return dfs(nums,su,0,target);
    }
    bool dfs(vector<int>& nums,vector<int>& sum,int index,int target){
        if(index==nums.size()){
            if(sum[0]==target&&sum[1]==target&&sum[2]==target)return true;
            return false;
        }
        for(int i=0;i<4;i++){
            if((sum[i]+nums[index])>target) continue;
            sum[i]+=nums[index];
            if(dfs(nums,sum,index+1,target))return true;
            sum[i]-=nums[index];
        }
        return false;
    }
};
