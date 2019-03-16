class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        for(int i=1;i<=n/2;i++){
            if(n%i==0){
                string tmp=s.substr(0,i);
                string res="";
                for(int j=0;j<n/i;j++)res+=tmp;
                if(res==s)return true;
            }
        }
        return false;
    }
};
