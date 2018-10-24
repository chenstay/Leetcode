class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        if(n==0)return "";
        if(n==1)return s;
        bool judge[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                judge[i][j]=false;
            }
        }
        int maxlen=0;
        int l=0;
        int r=0;
        for(int right=0;right<n;right++){
            int left=right;
            while(left>=0){
                if(s[left]==s[right]&&(right-left<2||judge[left+1][right-1])){
                    judge[left][right]=true;
                    if((right-left+1)>maxlen){
                        maxlen=right-left+1;
                        l=left;
                    }
                }
                left--;
            }
        }
        return s.substr(l,maxlen);
    }
};
//ref https://segmentfault.com/a/1190000003914228
//DP
