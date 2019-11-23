class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(n==1)return {0};
        vector<int> res;
        vector<unordered_set<int>> adj(n);
        queue<int> q;
        
        int row=edges.size();
        for(int i=0;i<row;i++){
            adj[edges[i][0]].insert(edges[i][1]);
            adj[edges[i][1]].insert(edges[i][0]);
        }
        for(int i=0;i<n;i++){
            if(adj[i].size()==1)q.push(i);
        }
        while(n>2){
            int size=q.size();
            n-=size;
            for(int i=0;i<size;i++){
                int t=q.front();
                q.pop();
                for(auto a:adj[t]){
                    adj[a].erase(t);
                    if(adj[a].size()==1)q.push(a);
                }
            }
        }
        while(!q.empty()){
            res.push_back(q.front());
            q.pop();
        }
        return res;
    }
};
