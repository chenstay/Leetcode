class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int cnt=0;
        int maxrow=0;
        int maxcol=0;
        vector<int> ini=grid[0];
        for(int i=0;i<row;i++){
            auto max=max_element(grid[i].begin(),grid[i].end());
            maxrow+=*max;
            for(int j=0;j<col;j++){
                if(grid[i][j]!=0)cnt++;
                if(grid[i][j]>ini[j])ini[j]=grid[i][j];
            }
        }
        for(int k=0;k<col;k++){
            maxcol+=ini[k];
        }
        return cnt+maxrow+maxcol;
    }
};
