class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        if(board.empty()||board.size()!=9||board[0].size()!=0)return;
        DFS(board,0,0);
    }
    bool DFS(vector<vector<char>>& board,int i,int j){
        if(i==9)return true;
        if(j>=9)return DFS(board,i+1,0);
        if(board[i][j]=='.'){
            for(int k=1;k<=9;k++){
                char tmp=k+'0';
                board[i][j]=tmp;
                if(isValid(board,i,j)&&DFS(board,i,j+1))return true;
                board[i][j]='.';
            }
        }
        else{
            return DFS(board,i,j+1);
        }
        return false;
    }
    bool isVaslid(vector<vector<char>>& board,int i,int j){
        for(int col=0;col<9;col++){
            if(j!=col&&board[i][j]==board[i][col])return false;
        }
        for(int row=0;row<9;row++){
            if(row!=i&&board[i][j]==board[row][j])return false;
        }
        for(int row=(i/3)*3;row<(i/3)*3+3;row++){
            for(int col=(j/3)*3;col<(j/3)*3+3;col++){
                if((row!=i||col!=j)&&board[row][col]==board[i][j])return false;
            }
        }
        return true;
    }
   
};
