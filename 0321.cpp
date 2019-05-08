class Solution {
public:
    vector<int> maxNumber(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<int> res;
        int n1=nums1.size();
        int n2=nums2.size();
        for(int i=max(0,k-n2);i<=min(k,n1);i++){
            res=max(res,merge(pickOut(nums1,i),pickOut(nums2,k-i)));
        }
        return res;
    }
    vector<int> pickOut(vector<int>& nums,int k){
        int drop=(int)nums.size()-k;
        vector<int> res;
        for(auto num:nums){
            while(!res.empty()&&drop>0&&num>res.back()){
                drop--;
                res.pop_back();
            }
            res.push_back(num);
        }
        res.resize(k);
        return res;
    }
    vector<int> merge(vector<int> nums1,vector<int> nums2){
        vector<int> res;
        while (!nums1.empty() || !nums2.empty()) {
            vector<int> &tmp = (nums1 > nums2) ? nums1 : nums2;
            res.push_back(tmp[0]);
            tmp.erase(tmp.begin());
        }
        return res;
    }
};

