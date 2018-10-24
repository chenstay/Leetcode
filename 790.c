class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        vector<int> left;
        vector<int> top(col,0);
        for(int i=0;i<row;i++){
            auto position=max_element(grid[i].begin(),grid[i].end());
            left.push_back(*position);
        }
        for(int i=0;i<col;i++){
            for(int j=0;j<row;j++){
                top[i]=max(top[i],grid[j][i]);
            }
        }
        int sum=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                sum=sum-grid[i][j]+min(left[i],top[j]);
            }
        }
        return sum;
    }
};
