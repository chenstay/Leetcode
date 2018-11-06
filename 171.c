class Solution {
public:
    int titleToNumber(string s) {
        int res=0;
        for(auto ss:s){
            res=res*26;
            res+=ss-'A'+1;
        }
        return res;
    }
};
