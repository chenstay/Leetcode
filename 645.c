class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> res;
        int n=nums.size();
        map<int,int> tmp;
        sort(nums.begin(),nums.end());
        for(int i=1;i<=n;i++){
            tmp[i]=0;
        }
        for(int i=0;i<n;i++){
            tmp[nums[i]]++;
        }
        for(auto m:tmp){
            if(m.second==2)res.push_back(m.first);
        }
        for(auto m:tmp){
            if(m.second==0)res.push_back(m.first);
        }
        return res;
    }
};
