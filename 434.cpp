class Solution {
public:
    int countSegments(string s) {
        if(s.empty())return 0;
        int num=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==' ')continue;
            num++;
            while(s[i]!=' '&&i<s.size())i++;
        }
        return num;
    }
};
