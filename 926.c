class Solution {
public:
    int minFlipsMonoIncr(string S) {
        int n=S.size();
        int num0=0;
        int num1=0;
        for(int i=0;i<n;i++){
            if(S[i]=='0')num0++;
            if(S[i]=='1')num1++;
        }
        int res=num0;
        int tmp=res;
        for(int i=0;i<n;i++){
            if(S[i]=='0')tmp--;
            if(S[i]=='1')tmp++;
            res=min(res,tmp);
        }
        return res;
    }
};
