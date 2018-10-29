class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        int row=matrix.size();
        if(row==0)return matrix;
        int col=matrix[0].size();
        queue<pair<int,int>> q;
        vector<vector<int>> res(row,vector<int>(col,INT_MAX));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    res[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        int dir[4][2] = { { -1, 0 }, { 1, 0 }, { 0, -1 }, { 0, 1 } };
        while(!q.empty()){
            pair<int,int> tmp=q.front();
            q.pop();
            for(int i=0;i<4;i++){
                int new_r=tmp.first+dir[i][0];
                int new_c=tmp.second+dir[i][1];
                if(new_r >= 0 && new_c >= 0 && new_r < row && new_c < col){
                    if(res[new_r][new_c]==INT_MAX){
                        res[new_r][new_c]=res[tmp.first][tmp.second]+1;
                        q.push({new_r,new_c});
                    }
                }
            }
        }
        
        return res;
    }
};
