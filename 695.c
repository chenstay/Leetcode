class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxArea=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)maxArea=max(maxArea,Area(grid,i,j));
            }
        }
        return maxArea;
    }
private:
    int Area(vector<vector<int>>& grid, int row, int col){
        int area=1;
        grid[row][col]=0;
        vector<int> dir({-1,0,1,0,-1});
        for (int i = 0; i < 4; i++) {
            int r = row+dir[i], c = col+dir[i+1];
            if(r>=0&&r<grid.size()&&c>=0&&c<grid[0].size()&&grid[r][c]==1)area+=Area(grid,r,c);
        }
        return area;
    }
};
