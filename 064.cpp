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
