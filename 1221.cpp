class Solution {
public:
    int balancedStringSplit(string s) {
        int n=s.size();
        int cnt=1;
        int res=0;
        char tmp=s[0];
        for(int i=1;i<n;i++){
            if(cnt==0)res++;
            if(s[i]==tmp)cnt++;
            else cnt--;
        }
        res++;
        return res;
    }
};
