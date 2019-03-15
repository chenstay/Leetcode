//关键是选定dp[i][j]表示从word1的前i个字符转变到word2的前j个字符所需要的步骤
//以及dp动态数组的递推式
class Solution {
public:
    int minDistance(string word1, string word2) {
        int row=word1.size();
        int col=word2.size();
        int dp[row+1][col+1];
        for(int i=0;i<=col;i++)dp[0][i]=i;
        for(int i=0;i<=row;i++)dp[i][0]=i;
        for(int i=1;i<=row;i++){
            for(int j=1;j<=col;j++){
                if(word1[i-1]==word2[j-1])dp[i][j]=dp[i-1][j-1];
                else dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1;
            }
        }
        return dp[row][col];
    }
};
