class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        vector<int> temp;
        vector<int> example;
        vector<vector<int>>res;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int b=i;
            if(std::find(example.begin(),example.end(),nums[i])==example.end()){
                while(nums[b]!=i){
                    temp.push_back(nums[b]);
                    example.push_back(nums[b]);
                    b=nums[b];
                }
                temp.push_back(nums[b]);
                example.push_back(nums[b]);
                res.push_back(temp);
                temp.clear();
            }
        }
        int arrayMax=0;
        for(auto &s:res){
            if(s.size()>arrayMax)arrayMax=s.size();
        }
        return arrayMax;
    }
};
