class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> m(26,0);
        for(auto task:tasks){
            m[task-'A']++;
        }
        sort(m.begin(),m.end(),greater<int>());
        int mx=m[0];int i=0;
        while(m[i]==mx&&i<m.size()){
            i++;
        }
        return max((int)tasks.size(),(mx-1)*(n+1)+i);
    }
};
