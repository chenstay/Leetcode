class Solution {
public:
    int findLHS(vector<int>& nums) {
        if(nums.empty())return 0;
        sort(nums.begin(),nums.end());
        map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        if(m.size()<2)return 0;
        int tmp1=m.begin()->first;
        int tmp2=m.begin()->second;
        int res=INT_MIN;
        for(auto mm=m.begin();mm!=m.end();mm++){
            if(mm->first==tmp1+1){
                res=max(res,tmp2+mm->second);
            }
            tmp1=mm->first;
            tmp2=mm->second;
        }
        return res==INT_MIN?0:res;
        
    }
};
