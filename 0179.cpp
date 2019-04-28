class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),
             [](int a,int b){return to_string(a)+to_string(b)>to_string(b)+to_string(a);}
            );
        string res="";
        for(auto num:nums){
            res+=to_string(num);
        }
        return nums[0]==0?"0":res;
    }
};
