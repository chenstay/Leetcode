//TLE
class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        vector<int> tmp;
        int n=nums.size();
        vector<int> res;
        
        for(int i=n-1;i>=0;i--){
            if(i<n-1)tmp.push_back(nums[i+1]);
            res.push_back(cal(tmp,nums[i]));
        }
        reverse(res.begin(),res.end());
        return res;
    }
    int cal(vector<int> tmp,int val){
        if(tmp.empty())return 0;
        sort(tmp.begin(),tmp.end());
        int left=0;int right=tmp.size();
        while(left<right){
            int mid=left+(right-left)/2;
            if(tmp[mid]<val)left=mid+1;
            else if(tmp[mid]==val){
                while(tmp[mid]==val&&mid>0)mid--;
                if(mid==0&&tmp[0]==val)return 0;
                else return mid+1;
            }
            else right=mid;
        }
        return right;
        
    }
};
