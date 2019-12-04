class Solution {
public:
    int longestPalindrome(string s) {
        int m[60]={0};
        for(char ss:s){
            m[ss-'A']++;
        }
        bool judge=false;
        int res=0;
        for(int i=0;i<60;i++){
            if(m[i]%2==1){judge=true;res+=m[i]-1;}
            else res+=m[i];
        }
        if(judge)res++;
        return res;
    }
};
