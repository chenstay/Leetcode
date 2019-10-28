class Solution {
public:
    int numDistinct(string s, string t) {
        int col=s.size();
        int row=t.size();
        vector<vector<long>> dp(row+1,vector<long>(col+1,0));
        for(int i=0;i<=col;i++)dp[0][i]=1;
        for(int i=1;i<=row;i++){
            for(int j=1;j<=col;j++){
                if(t[i-1]==s[j-1])dp[i][j]=dp[i][j-1]+dp[i-1][j-1];
                else dp[i][j]=dp[i][j-1];
            }
        }
        return dp[row][col];
    }
};
