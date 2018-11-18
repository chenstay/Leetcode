class NumMatrix {
public:
    NumMatrix(vector<vector<int>> matrix) {
        dp = matrix;
        int row=matrix.size();
        if(row>0){
            int col=matrix[0].size();
            for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                    dp[i][j]+=(i>0?dp[i-1][j]:0)+(j>0?dp[i][j-1]:0)-(i>0&&j>0?dp[i-1][j-1]:0);
                }
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        if(dp.empty())return 0;
        return dp[row2][col2]-(row1>0?dp[row1-1][col2]:0)-(col1>0?dp[row2][col1-1]:0)+(row1>0&&col1>0?dp[row1-1][col1-1]:0);
    }
private:
    vector<vector<int>> dp;
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix obj = new NumMatrix(matrix);
 * int param_1 = obj.sumRegion(row1,col1,row2,col2);
 */
