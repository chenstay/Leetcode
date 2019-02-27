//DFS
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int S) {
        int res=0;
        int total=0;
        MyFind(nums,S,0,total,res);
        return res;
    }
    void MyFind(vector<int>& nums,int S,int index,int total,int& res){
        if(index==nums.size()&&total==S)res++;
        if(index<nums.size()){
            MyFind(nums,S,index+1,total+nums[index],res);
            MyFind(nums,S,index+1,total-nums[index],res);
        }
    }
};
