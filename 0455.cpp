class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int j=0;
        int i=0;
        int res=0;
        while(i<s.size()){
            while(i<s.size()&&g[j]>s[i])i++;
            if(i==s.size())break;
            res++;
            i++;
            if(j<g.size()-1)j++;
            else break;
        }
        return res;
    }
};
