class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.end(),  nums2.begin(),  nums2.end());
        sort(nums1.begin(),nums1.end());
        int n1=nums1.size();
        if(n1%2==1)return nums1[n1/2];
        if(n1%2==0)return double(nums1[n1/2]+nums1[n1/2-1])/2;
    }
};
