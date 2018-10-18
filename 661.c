class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& M) {
        int row=M.size();
        int col=M[0].size();
        vector<vector<int>> res (row,vector<int>(col,0));
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                res[i][j]=cal(M,i,j);
            }
        }
        return res;
    }
    int cal(vector<vector<int>>& M,int i,int j){
        vector<int> grid({-1,1,0,-1,-1,0,1,1,-1});
        //int row=M.size();
        //int col=M[0].size();
        int sum=M[i][j];
        int num=1;
        for(int k=0;k<8;k++){
            int r=i+grid[k];
            int c=j+grid[k+1];
            if(r>=0&&r<M.size()&&c>=0&&c<M[0].size()){
                sum+=M[r][c];
                num++;
            }
        }
        return sum/num;
    }
};
