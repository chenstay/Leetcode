class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        int n=moves.size();
        if(n<5)return "Pending";
        vector<int> Arow(3);vector<int> Acol(3);
        vector<int> Brow(3);vector<int> Bcol(3);
        int  aD1 = 0, aD2 = 0, bD1 = 0, bD2 = 0;
        for(int i=0;i<n;i++){
            int row=moves[i][0];int col=moves[i][1];
            if(i%2==0){
                if(++Arow[row]==3||++Acol[col]==3|| row==col && ++aD1==3 || row+col==2&&++aD2==3 )return "A";
            }
            if(i%2==1){
                if(++Brow[row]==3||++Bcol[col]==3|| row==col && ++bD1==3 || row+col==2&&++bD2==3 )return "B";
            }
        }
        return n==9?"Draw":"Pending";
    }
};
