class Solution {
public:
    int partitionDisjoint(vector<int>& A) {
        int n=A.size();
        vector<int> vec;
        vector<int> B(n);
        B[n - 1] = A[n - 1];
        for (int i = n - 2; i > 0; --i)
            B[i] = min(A[i], B[i + 1]);//B[i]=min{A[i],...,A[n-1]}
        vector<int> C(n);
        C[0] = A[0];
        for (int i = 1; i <n; i++)
            C[i] = max(A[i], C[i - 1]);//C[i]=max{A[0],...,A[i]}
        for(int i=1;i<n;i++)
        {
            if(C[i-1]<=B[i])return i;
        }
    }
};
