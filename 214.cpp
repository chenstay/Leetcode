//TLE
class Solution {
public:
    string shortestPalindrome(string s) {
        int n=s.size();
        if(n<2||judge(s))return s;
        string c=s.substr(1);
        reverse(c.begin(),c.end());
        string res=c+s;
        if(n==2)return res;
        for(int i=2;i<n;i++){
            string a=s.substr(i);
            reverse(a.begin(),a.end());
            string b=a+s;
            if(judge(b))res=b;
        }
        return res;
    }
    bool judge(string tmp){
        string a=tmp.substr((tmp.size()+1)/2);
        string b=tmp.substr(tmp.size()/2);
        reverse(a.begin(),a.end());
        if(a+b==tmp)return true;
        else return false;
    }
};
