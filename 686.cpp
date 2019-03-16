class Solution {
public:
    int repeatedStringMatch(string A, string B) {
        string t=A;
        for(int i=1;i<=B.size()/A.size()+2;i++){//关键是1-B/A+2范围
            if(t.find(B)!=string::npos)return i;
            t+=A;
        }
        return -1;
    }
};
