class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        arr.push_back(x);
        sort(arr.begin(),arr.end());
        int index=lower_bound(arr.begin(),arr.end(),x)-arr.begin();
        vector<int> res;
        int right=index+1;int n=arr.size();
        int left=index-1;
        while(k>0){
            if(left>=0&&right<n){
                x-arr[left]<=arr[right]-x?res.push_back(arr[left--]):res.push_back(arr[right++]);
            }
            else if(left>=0)res.push_back(arr[left--]);
            else if(right<n)res.push_back(arr[right++]);
            k--;
        }
        sort(res.begin(),res.end());
        return res;
    }
};
