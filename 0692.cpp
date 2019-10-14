class Solution {
public:
    struct cmp
    {
    bool operator()(const pair<string,int> &p1,const pair<string,int> &p2)
    {
        return p1.second > p2.second|| (p1.second == p2.second && p1.first < p2.first);;
    }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> m;
        for(auto word:words){
            m[word]++;
        }
        vector<pair<string, int>> vec(m.begin(), m.end());
        sort(vec.begin(),vec.end(),cmp());
        vector<string> res;
        for(int i=0;i<k;i++){
            res.push_back(vec[i].first);
        }
        return res;
    }
};
