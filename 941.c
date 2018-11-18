class Solution {
public:
    bool validMountainArray(vector<int>& A) {
        int n=A.size();
        if(n<3)return false;
        int i=0;
        while(A[i]<A[i+1]&&i<n-1)i++;
        if(i==n-1||i==0)return false;
        while(A[i]>A[i+1]&&i<n-1)i++;
        return i==n-1;
    }
};
