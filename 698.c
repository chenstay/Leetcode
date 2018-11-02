class Solution {
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        if(nums.size()==0)return false;
        int sum=accumulate(nums.begin(),nums.end(),0);
        if(sum%k!=0)return false;
        int target=sum/k;
        vector<bool> visited(nums.size(),false);
        sort(nums.begin(), nums.end(), greater<int>());
        return helper(nums,k,target,0,0,visited);
    }
    bool helper(vector<int>& nums, int k, int target, int index, int curSum, vector<bool>& visited){
        if(k==1)return true;
        if(curSum==target) return helper(nums,k-1,target,0,0,visited);
        if(curSum>target||index==nums.size())return false;
        for(int i=index;i<nums.size();i++){
            if(visited[i])continue;
            visited[i]=true;
            if(helper(nums,k,target,index+1,curSum+nums[i],visited))return true;
            visited[i]=false;
        }
        return false;
    }
};
