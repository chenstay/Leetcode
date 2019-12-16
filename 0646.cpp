class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end(),[](vector<int>&a,vector<int>&b){
            return a[1]<b[1];
        });
        int n=pairs.size();
        if(n<=1)return 0;
        int tmp=pairs[0][1];
        int res=1;
        for(int i=1;i<n;i++){
            if(pairs[i][0]>tmp){
                res++;
                tmp=pairs[i][1];
            }
        }
        return res;
    }
};
