class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res="";
        int n=strs.size();
        if(n==0)return res;
        if(n==1)return strs[0];
        for(int i=0;i<strs[0].size();i++){
            for(int j=0;j<n;j++){
                if(strs[j].size()>i&&strs[j][i]==strs[0][i]){
                    if(j==n-1)res+=strs[0][i];
                    else continue;
                }
                else return res;
            }
        }
        return res;
    }
};
