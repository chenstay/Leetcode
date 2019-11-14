class Solution {
public:
    vector<vector<int>> reconstructMatrix(int upper, int lower, vector<int>& colsum) {
        int col=colsum.size();
        int up=upper;
        int lo=lower;
        vector<int> temp;
        vector<vector<int>> res(2,vector<int>(col,0));
        for(int i=0;i<col;i++){
            if(colsum[i]==2){
                up--;lo--;
                res[0][i]=1;
                res[1][i]=1;
            }
        }
        for(int i=0;i<col;i++){
            if(colsum[i]==1){
                if(up!=0){
                    res[0][i]=1;
                    up--;
                }
                else if(lo!=0){
                    res[1][i]=1;
                    lo--;
                }
                else return {};
            }
        }
        if(accumulate(res[0].begin(),res[0].end(),0)!=upper||accumulate(res[1].begin(),res[1].end(),0)!=lower)return {};
        return res;
    }
}; 
