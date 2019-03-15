//run ok sumbit fail
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        if(matrix.empty()||matrix[0].empty())return res;
        int row=matrix.size();
        int col=matrix[0].size();
        bool judge[row][col]={0};
        int i=0,j=0;
        judge[0][0]=true;
        res.push_back(matrix[0][0]);
        for(int k=0;k<(row+1)/2;k++){
            while(j+1<col&&!judge[i][j+1]){
                //cout<<j<<endl;
                j++;
                res.push_back(matrix[i][j]);
                judge[i][j]=true;
            }
            while(i+1<row&&!judge[i+1][j]){
                i++;
                judge[i][j]=true;
                res.push_back(matrix[i][j]);
            }
            while(j>0&&!judge[i][j-1]){
                j--;
                judge[i][j]=true;
                res.push_back(matrix[i][j]);
            }
            while(i>0&&!judge[i-1][j]){
                i--;
                judge[i][j]=true;
                res.push_back(matrix[i][j]);
            }
        }
        return res;
    }
};
//another way
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        if(matrix.empty()||matrix[0].empty())return res;
        int row=matrix.size();
        int col=matrix[0].size();
        int left=0,right=col-1,up=0,down=row-1;
        while(true){
            for(int i=left;i<=right;i++)res.push_back(matrix[up][i]);
            if(++up>down)break;
            for(int i=up;i<=down;i++)res.push_back(matrix[i][right]);
            if(--right<left)break;
            for(int i=right;i>=left;i--)res.push_back(matrix[down][i]);
            if(--down<up)break;
            for(int i=down;i>=up;i--)res.push_back(matrix[i][left]);
            if(++left>right)break;
        }
        return res;
    }
};
