class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        vector<int>::iterator biggest = max_element(begin(nums), end(nums));  
        int a=true;
        int position=distance(begin(nums),biggest);
        for(int i=0;i<n;i++){
            if(i!=position&&nums[i]*2>nums[position])a=false;
        }
        if(a==true)return position;
        else return -1;
        
    }
};
