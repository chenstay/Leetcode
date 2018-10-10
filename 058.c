class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<char> res;
        while(s.back()==' ')s.pop_back();
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            if(s[i]!=' ')res.push_back(s[i]);
            if(s[i]==' '||i==0)return res.size();
        }
        return 0;
    }
};
