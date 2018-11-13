class Solution {
public:
    vector<int> partitionLabels(string S) {
        map<char,int> m;
        vector<int> res;
        int n=S.size(),start=0,end=0;
        for(int i=0;i<n;i++){
            m[S[i]]=i;
        }
        for(int i=0;i<n;i++){
            end=max(m[S[i]],end);
            if(i==end){
                res.push_back(i-start+1);
                start=i+1;
            }
        }
        return res;
    }
};
