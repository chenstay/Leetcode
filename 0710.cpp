class Solution {
public:
    Solution(int N, vector<int>& blacklist) {
        len=N-blacklist.size();
        unordered_set<int> st;
        for(int i=len;i<N;i++)st.insert(i);
        for(auto b:blacklist)st.erase(b);
        auto it=st.begin();
        for(int num:blacklist){
            if(num<len)m[num]=*it++;
        }
    }
    
    int pick() {
        int k=rand()%len;
        return m.count(k)?m[k]:k;
    }
private:
    unordered_map<int,int> m;
    int len;
};
