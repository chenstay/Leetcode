class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        if(board.empty()||board[0].empty())return false;
        int n=board.size();
        vector<vector<bool>> xjudge(n,vector<bool>(n,false));
        vector<vector<bool>> yjudge(n,vector<bool>(n,false));
        vector<vector<bool>> judge(n,vector<bool>(n,false));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]>='1'&&board[i][j]<='9'){
                    int c=board[i][j]-'1';
                    if(xjudge[c][j]||yjudge[i][c]||judge[3*(i/3)+j/3][c])return false;
                    xjudge[c][j]=true;
                    yjudge[i][c]=true;
                    judge[3*(i/3)+j/3][c]=true;}
            }
        }
        return true;
    }
};
//关于鲁棒性，首先要判断二维数组是否为空
//其次要判断数组中的每一个值是否为1-9之间的一个数组
//3*(i/3)+j/3可以分为3*3的各个小块
