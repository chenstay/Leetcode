class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> res;
        if(s.empty()||words.empty())return res;
        unordered_map<string,int> m1;
        for(auto word:words)m1[word]++;
        int n=words.size();
        int m=words[0].size();
        for(int i=0;i<=int(s.size())-n*m;i++){
            unordered_map<string,int> m2;
            int j=0;
            for(j=0;j<n;j++){
                string t=s.substr(i+j*m,m);
                if(m1.find(t)==m1.end())break; //not found
                m2[t]++;
                if(m2[t]>m1[t])break;
            }
            if(j==n)res.push_back(i);
        }
        return res;
    }
};

// int(s.size())
