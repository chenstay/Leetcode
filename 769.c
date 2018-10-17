class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n=arr.size();
        int res=0;
        for(int i=0,max_loc=0;i<n;i++){
            max_loc=max(arr[i],max_loc);
            if(max_loc==i)res++;
        }
        return res;
    }
};
