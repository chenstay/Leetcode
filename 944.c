class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        int row=A.size();
        int col=A[0].size();
        int res=0;
        for(int i=0;i<col;i++){
            for(int j=0;j<row-1;j++){
                if(A[j][i]>A[j+1][i]){res++;break;}
            }
        }
        return res;
    }
};
