class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
        int len=R+C-2;
        vector<vector<int>> res;
        res.push_back({r0,c0});
        for(int i=1;i<=len;i++)
            for(int k=max(0,r0-i);k<=min(r0+i,R-1);k++){
                if(c0+i-abs(k-r0)<C)res.push_back({k,c0+i-abs(k-r0)});
                if(c0-i+abs(k-r0)!=c0+i-abs(k-r0)&&c0-i+abs(k-r0)>=0)res.push_back({k,c0-i+abs(k-r0)});
            }
        return res;
    }
};
