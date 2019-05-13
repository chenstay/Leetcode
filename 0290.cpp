class Solution {
public:
    bool wordPattern(string pattern, string str) {
        int n=0;
        map<string,char> m;
        map<char,string> x;
        int start=0;
        for(int i=0;i<=str.size();i++){
            if(str[i]==' '||i==str.size()){
                string tmp=str.substr(start,i-start);
                if(!m.count(tmp)) {
                    if(x.count(pattern[n])&&x[pattern[n]]!=tmp)return false;
                    x[pattern[n]]=tmp;
                    m[tmp]=pattern[n++];
                }
                else {
                    if(m[tmp]!=pattern[n])return false;
                    else n++;
                }
                start=i+1;
            }
        }
        return n==pattern.size();
    }
};
