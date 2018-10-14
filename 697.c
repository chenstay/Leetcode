class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n=nums.size();
        int distance=INT_MAX;//max length of type of int
        map<int,int> mp,index;
        int degree=0;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            if(mp[nums[i]]==1)index[nums[i]]=i;
            if(mp[nums[i]]==degree)distance=min(distance,i-index[nums[i]]+1);
            if(mp[nums[i]]>degree){
                distance=i-index[nums[i]]+1;
                degree=mp[nums[i]];
            }
        }
        return distance;
    }
};
