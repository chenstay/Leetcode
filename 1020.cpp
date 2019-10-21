class Solution {
public:
    int numEnclaves(vector<vector<int>>& A) {
        if(A.size()<2||A[0].size()<2)return 0;
        int row=A.size();
        int col=A[0].size();
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if (i * j == 0 || i == A.size() - 1 || j == A[i].size() - 1) dfs(A, i, j);
            }
        }
        int sum=0;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                sum+=A[i][j];
            }
        }
        return sum;
    }
    void dfs(vector<vector<int>>& A, int i, int j) {
        if (i < 0 || j < 0 || i == A.size() || j == A[i].size() || A[i][j] != 1) return;
        A[i][j] = 0;
        dfs(A, i + 1, j), dfs(A, i - 1, j), dfs(A, i, j + 1), dfs(A, i, j - 1);
    }
};
