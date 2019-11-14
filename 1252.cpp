class Solution {
public:
    int oddCells(int n, int m, vector<vector<int>>& indices) {
        int res=0;
        int myRow[n]={0};
        int myCol[m]={0};
        for(int i=0;i<indices.size();i++){
            myRow[indices[i][0]]++;
            myCol[indices[i][1]]++;  
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if((myRow[i]+myCol[j])%2==1)res++;
            }
        }
        return res;
    }
};
