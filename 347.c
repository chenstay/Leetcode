class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int num:nums){
            m[num]++;
        }
        
        vector<vector<int>> bucket(nums.size()+1);
        for(auto p:m){
            bucket[p.second].push_back(p.first);
        }
        
        vector<int> res;
        for(int i=nums.size();i>=0&&res.size()<k;i--){
            for(auto j:bucket[i]){
                res.push_back(j);
                if(res.size()==k)break;
            }
        }
        return res;
    }
};
