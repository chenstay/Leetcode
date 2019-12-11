class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        int n=A.size();
        if(n<3)return 0;
        int tmp=A[1]-A[0];
        int len=2;
        int res=0;
        for(int i=2;i<n;i++){
            if(A[i]-A[i-1]==tmp)len++;
            else {
                tmp=A[i]-A[i-1];
                if(len>=3){
                    res+=(len-1)*(len-2)/2;
                    len=2;
                }
            }
        }
        if(len>=3)res+=(len-1)*(len-2)/2;
        return res;
    }
};
