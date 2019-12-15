class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        if(wall.empty()||wall[0].empty())return 0;
        int row=wall.size();
        map<int,int> m;
        int tmp=0;
        for(int i=0;i<row;i++){
            int curSum=0;
            int col=wall[i].size();
            for(int j=0;j<col-1;j++){
                curSum+=wall[i][j];
                m[curSum]++;
                tmp=max(tmp,m[curSum]);
            }
        }
        return row-tmp;
    }
};
