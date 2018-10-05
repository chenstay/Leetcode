class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int> res;
        int n=nums.size();
        int n2=findNums.size();
        stack<int> s;
        map<int,int> m;
        for(int i=n-1;i>=0;i--){
            while(!s.empty()&&nums[i]>=s.top())s.pop();
            m[nums[i]]=s.empty()?-1:s.top();
            s.push(nums[i]);
        }
        for(int i=0;i<n2;i++){
            res.push_back(m[findNums[i]]);
        }
        return res;
    }
};
