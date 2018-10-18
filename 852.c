class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int n=A.size();
        for(int i=1;i<n-1;i++){
            if(A[i]>A[i-1]&&A[i]>A[i+1])return i;
        }
        return 0;
        
        //solution 2
        //vector<int>::iterator max_iter = max_element(A.begin(), A.end());
        //return distance(A.begin(), max_iter);
        
        //solution 3
        /*int n=A.size();
        int left=0;
        int right=n-1;
        while(left<right){
            int mid=(left+right)/2;
            if(A[mid]>A[mid+1])right=mid;
            else left=mid+1;
        }
        return right;*/
        //right==left
    }
};
