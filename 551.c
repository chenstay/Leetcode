class Solution {
public:
    bool checkRecord(string s) {
        int n=s.size();
        int cnt=0;
        bool a=true;
        for(int i=0;i<n;i++){
            if(s[i]=='A')cnt++;
            if(s[i]=='L'&&s[i-1]=='L'&&s[i+1]=='L')a=false;
        }
        if(cnt>1)a=false;
        return a;
    }
};
