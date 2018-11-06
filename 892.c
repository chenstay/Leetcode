class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        int row=grid.size();
        int res=0;
        int moves[4][2]={{-1,0},{1,0},{0,1},{0,-1}};
        for(int i=0;i<row;i++){
            for(int j=0;j<row;j++){
                if(grid[i][j])res+=2;
                for(int k=0;k<4;k++){
                    int new_i=i+moves[k][0];
                    int new_j=j+moves[k][1];
                    if(new_i<0||new_j<0||new_i>=row||new_j>=row)res+=grid[i][j];
                    else res+=(grid[i][j]-grid[new_i][new_j])>0?(grid[i][j]-grid[new_i][new_j]):0;
                }
            }
        }
        return res;
    }
};
