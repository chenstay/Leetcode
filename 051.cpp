class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<int> pos(n,-1);
        DFS(pos,0,res);
        return res;
    }
    void DFS(vector<int> &pos,int row,vector<vector<string>> &res){
        int n=pos.size();
        if(row==n){
            vector<string> str(n,string(n,'.'));
            for(int i=0;i<n;i++){
                str[i][pos[i]]='Q';
            }
            res.push_back(str);
        }
        else{
            for(int col=0;col<n;col++){
                if(isValid(pos,row,col)){
                    pos[row]=col;
                    DFS(pos,row+1,res);
                    pos[row]=-1;
                }
            }
        }
    }
    bool isValid(vector<int> &pos,int row,int col){
        for(int i=0;i<row;i++){
            //(row,col)与(i,pos[i])比较
            if(pos[i]==col||abs(row-i)==abs(col-pos[i]))return false;
        }
        return true;
    }
};
