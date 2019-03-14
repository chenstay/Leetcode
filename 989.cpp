class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        vector<int> res;
        reverse(A.begin(),A.end());
        A[0]+=K;
        int i=0;
        while(A[i]>=10){
            if(i>=A.size()-1)A.push_back(0);
            A[i+1]+=A[i]/10;
            A[i]%=10;
            i++;
        }
        reverse(A.begin(),A.end());
        return A;
    }
};
