//based on Leetcode 205
class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        //int n=string.size();
        vector<string> res;
        for(auto c : words)
            if(isIsomorphic(c,pattern)==true)res.push_back(c);
        return res;
    }
        bool isIsomorphic(string s, string t) {
        int snum=s.size();
        int tnum=t.size();
        if(snum!=tnum)return false;
        map<char,char> smap; //s->t
        map<char,char> tmap; //t->s
        for(int i=0;i<snum;i++){
            char schar=s[i];
            char tchar=t[i];
            if(smap.find(schar)!=smap.end()&&smap[schar]!=tchar)return false;
            if(tmap.find(tchar)!=tmap.end()&&tmap[tchar]!=schar)return false;
            smap[schar]=tchar;
            tmap[tchar]=schar;
        }
        return true;
    }
};
