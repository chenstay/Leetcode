class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        int n=S.size();
        vector<int> temp;
        vector<vector<int>> res;
        int left=0;
        for(int i=0;i<n;i++){
            if(S[i]!=S[i+1]||i==n-1){
                if((i-left)>=2){
                    temp.push_back(left);
                    temp.push_back(i);
                    res.push_back(temp);
                    temp.clear();
                }
                left=i+1;
            }
        }
        return res;
    }
};
