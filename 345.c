class Solution {
public:
    string reverseVowels(string s) {
        int n=s.size();
        vector<char> temp;
        string res="";
        for(int i=0;i<n;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                temp.push_back(s[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                res+=temp.back();
                temp.pop_back();
            }
            else{
                res+=s[i];
            }
        }
        return res;
    }
};
