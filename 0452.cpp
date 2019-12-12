class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.empty())return 0;
        sort(points.begin(),points.end());
        int start=points[0][0];int end=points[0][1];
        int res=1;
        for(int i=1;i<points.size();i++){
            if(points[i][0]<=end){
                start=points[i][0];
                if(points[i][1]<=end)end=points[i][1];
            }
            else {
                res++;
                start=points[i][0];
                end=points[i][1];
            }
        }
        return res;
    }
};
