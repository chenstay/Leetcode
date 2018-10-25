class Solution {
public:
    vector<int> shortestToChar(string S, char C) {
        vector<int> tmp;
        int n=S.size();
        for(int i=0;i<n;i++){
            if(S[i]==C)tmp.push_back(i);
        }
        vector<int> res(n,n);
        for(int i=0;i<n;i++){
            for(int j=0;j<tmp.size();j++){
                res[i]=min(res[i],abs(i-tmp[j]));
            }
        }
        return res;
    }
};
