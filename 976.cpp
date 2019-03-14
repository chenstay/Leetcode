class Solution {
public:
    int largestPerimeter(vector<int>& A) {
        sort(A.begin(),A.end());
        int n=A.size();
        if(n<3)return 0;
        reverse(A.begin(),A.end());
        int i=2;
        while(i<n){
            if(A[i-2]<A[i-1]+A[i])return A[i-2]+A[i-1]+A[i];
            else i++;
        }
        return 0;
    }
};
