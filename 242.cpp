class Solution {
public:
    bool isAnagram(string s, string t) {
        int m=s.size();
        int n=t.size();
        if(m!=n)return false;
        vector<int> m1(256,0),m2(256,0);
        for(int i=0;i<m;i++){
            m1[s[i]]++;
            m2[t[i]]++;
        }
        return m1==m2;
    }
};
