//DFS TLE
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        if(grid.size()<1)return 0;
        int sum=INT_MAX;
        dfs(grid,0,0,grid[0][0],sum);
        return sum;
    }
    void dfs(vector<vector<int>>& grid,int i,int j,int CurSum,int& sum)
    {
        int row=grid.size();
        int col=grid[0].size();
        if(i==row-1&&j==col-1){
            if(CurSum<sum)sum=CurSum;
        }
        if(i+1<row)dfs(grid,i+1,j,CurSum+grid[i+1][j],sum);
        if(j+1<col)dfs(grid,i,j+1,CurSum+grid[i][j+1],sum);
    }
};
//DP AC
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int dp[row][col];
        dp[0][0]=grid[0][0];
        for(int i=1;i<row;i++)dp[i][0]=dp[i-1][0]+grid[i][0];
        for(int j=1;j<col;j++)dp[0][j]=dp[0][j-1]+grid[0][j];
        for(int i=1;i<row;i++){
            for(int j=1;j<col;j++){
                dp[i][j]=grid[i][j]+min(dp[i-1][j],dp[i][j-1]);
            }
        }
        return dp[row-1][col-1];
    }
};
