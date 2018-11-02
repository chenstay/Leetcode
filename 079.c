class Solution {
public:
    int dir[4][2]={{-1,0},{0,-1},{0,1},{1,0}};
    bool exist(vector<vector<char>>& board, string word) {
        int row=board.size();
        int col=board[0].size();
        vector<vector<int>> qq;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(board[i][j]==word[0])qq.push_back({i,j});
            }
        }
        vector<vector<bool>> visited(row,vector<bool>(col,false));
        for(auto q:qq){
            visited[q[0]][q[1]]=true;
            if(dfs(board,word,q[0],q[1],1,visited))return true;
            visited[q[0]][q[1]]=false;
        }
        return false;
    }
private:
    bool dfs(vector<vector<char>>& board, string word,int r,int c,int index,vector<vector<bool>>& visited){
        if(index==word.size())return true;
        for(int i=0;i<4;i++){
            int new_r = r + dir[i][0];
            int new_c = c + dir[i][1];
            if(new_r>=0&&new_c>=0&&new_r<board.size()&&new_c<board[0].size()&&board[new_r][new_c]==word[index]&&!visited[new_r][new_c]){
                //cout<<new_r<<" "<<index<<" "<<new_c<<"+";
                visited[new_r][new_c]=true;
                if(dfs(board,word,new_r,new_c,index+1,visited))return true;
                visited[new_r][new_c]=false;
            }
        }
        return false;
    }
};
