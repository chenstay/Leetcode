class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        if(grid.empty()||grid[0].empty())return 0;
        int row=grid.size();
        int col=grid[0].size();
        vector<vector<bool>> visited(row,vector<bool>(col,false));
        int res=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]=='0'||visited[i][j])continue;
                DFS(grid,i,j,visited);
                res++;
            }
        }
        return res;
    }
    void DFS(vector<vector<char>>& grid,int i,int j,vector<vector<bool>>& visited){
        if(i<0||j<0||i>=grid.size()||j>=grid[0].size()||visited[i][j]||grid[i][j]=='0')return ;
        visited[i][j]=true;
        DFS(grid,i-1,j,visited);
        DFS(grid,i+1,j,visited);
        DFS(grid,i,j-1,visited);
        DFS(grid,i,j+1,visited);
    }
};
