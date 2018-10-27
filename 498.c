class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        int M=matrix.size();
        vector<int> res;
        if(M==0) return res;
        if(M==1) return matrix[0];
        int N=matrix[0].size();
        if(N==1){
            for(int i=0;i<M;i++){
                res.push_back(matrix[i][0]);
            }
            return res;
        }
        
        int i=0;
        int j=0;
        int flag=1;
        while(!(i==M-1&&j==N-1)){
            res.push_back(matrix[i][j]);
            if(i==0&&j%2==0&&(j+1)<N){
                j++;
                
                flag=1;//右上至左下
            }
            else if(j==0&&i%2==1&&(i+1)<M){
                i++;;
                flag=0;//左下至右上
            }
            else if(i==(M-1)&&flag==1&&(j+1)<N){
                cout<<j<<endl;
                j++;
                cout<<j<<endl;
                flag=0;
            }
            else if(j==(N-1)&&flag==0&&(i+1)<M){
                i++;
                flag=1;
            }
            else {
                if(flag==1&&(i+1)<M){
                    i++;
                    j--;
                }
                if(flag==0&&(j+1)<N){
                    i--;
                    j++;
                }
            }
        }
        res.push_back(matrix[M-1][N-1]);
        return res;
    }
};
