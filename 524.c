//ref 392
class Solution {
public:
    string findLongestWord(string s, vector<string>& d) {
        string res="";
        sort(d.begin(),d.end());
        for(auto dd:d)
        {
            if(isSubsequence(dd,s))res=(dd.size()>res.size())?dd:res;
        }
        return res;
    }
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        int num=0;
        while(i<s.size()&&j<t.size()){
            if(s[i]==t[j]){i++;j++;num++;}
            else j++;
        }
        return num==s.size();
    }
};
