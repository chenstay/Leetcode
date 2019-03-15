class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<int> tmp1,tmp2;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    tmp1.push_back(i);
                    tmp2.push_back(j);
                }
            }
        }
        for(auto tmp:tmp1)
            for(int i=0;i<col;i++)
                matrix[tmp][i]=0;
        for(auto tmp:tmp2)
            for(int i=0;i<row;i++)
                matrix[i][tmp]=0;
    }
};
