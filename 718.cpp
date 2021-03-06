class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) {
        int res=0;
        vector<vector<int>> dp(A.size()+1,vector<int>(B.size()+1,0));
        for(int i=1;i<=A.size();i++){
            for(int j=1;j<=B.size();j++){
                dp[i][j]=(A[i-1]==B[j-1])?dp[i-1][j-1]+1:0;
                res=max(res,dp[i][j]);
            }
        }
        return res;
    }
};
