class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> res;
        int n=s.size();
        if(n<=10)return res;
        int cur=0;
        for(int i=0;i<10;i++){
            cur=(cur<<3)|(s[i]&7);
        }
        map<int,int> m;
        m[cur]++;
        int mask=0x7ffffff;
        for(int i=10;i<n;i++){
            cur=((cur&mask)<<3)|(s[i]&7);
            if(m.count(cur)){
                if(m[cur]==1)res.push_back(s.substr(i-9,10));
                m[cur]++;
            }
            else m[cur]=1;
        }
        return res;
    }
};
