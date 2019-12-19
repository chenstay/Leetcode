class Solution {
public:
    string customSortString(string S, string T) {
        string res;
        map<char,int> index;
        map<char,int> num;
        for(int i=0;i<S.size();i++)index[S[i]]=i;
        vector<pair<char,int>> tmp;
        for(auto t=index.begin();t!=index.end();t++)tmp.push_back(pair<int,int>(t->first,t->second));
        sort(tmp.begin(),tmp.end(),[](pair<char,int> &a,pair<char,int> &b){
           return a.second<b.second; 
        });
        for(auto tt:T)num[tt]++;
        for(auto t:tmp){
            for(int i=0;i<num[t.first];i++)res+=t.first;
        }
        for(auto tt:T)if(!index.count(tt))res+=tt;
        return res;
    }
};
