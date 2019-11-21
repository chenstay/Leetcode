class Solution {
public:
    string reverseWords(string s) {
        if(s.empty())return "";
        stack<string> tmp;
        string t="";
        for(int i=0;i<s.size();i++){
            if(s[i]==' '){
                if(t!="")
                {
                    tmp.push(t);
                    t="";
                }
            }
            else if(s[i]!=' '){
                t+=s[i];
            }
        }
        if(t!="")tmp.push(t);
        string res="";
        while(!tmp.empty()){
            res+=' ';
            res+=tmp.top();
            tmp.pop();
        }
        if(res.empty())return "";
        return res.substr(1);
    }
};
