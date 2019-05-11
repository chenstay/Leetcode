class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.empty()||matrix[0].empty())return false;
        int row=matrix.size();
        int col=matrix[0].size();
        int x=0;
        int y=col-1;
        while(true){
            if(matrix[x][y]<target)x++;
            else if(matrix[x][y]>target)y--;
            else return true;
            if(x>=row||y<0)break;
        }
        return false;
    }
};
