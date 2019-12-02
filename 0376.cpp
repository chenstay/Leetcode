class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int n=nums.size();
        if(n<2)return n;
        int cur=nums[1]-nums[0];
        int res;
        if(cur!=0)res=2;
        else res=1;
        if(n==2)return res;
        for(int i=2;i<n;i++){
            int tmp=nums[i]-nums[i-1];
            if(cur>0){
                if(tmp>=0)continue;
                else {cur=tmp;res++;}
            }
            else if(cur<0){
                if(tmp<=0)continue;
                else {cur=tmp;res++;}
            }
            else{
                if(tmp!=0){cur=tmp;res++;}
                else continue;
            }
        }
        return res;
    }
};
