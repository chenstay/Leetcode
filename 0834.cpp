class Solution {
public:
    vector<int> sumOfDistancesInTree(int N, vector<vector<int>>& edges) {
        vector<int> res(N);
        map<int,vector<int>> m;
        for(auto edge:edges){
            m[edge[0]].push_back(edge[1]);
            m[edge[1]].push_back(edge[0]);
        }
    
        
        for(int i=0;i<N;i++){
            int sum=0;
            vector<bool> visited(N,false);
            dfs(m,i,visited,0,sum);
            res[i]=sum;
        }
        return res;
        
    }
    void dfs(map<int,vector<int>> m,int i,vector<bool> visited,int curSum,int &res){
        res+=curSum;
        visited[i]=true;
        for(auto next:m[i]){
            if(visited[next])continue;
            visited[next]=true;
            dfs(m,next,visited,curSum+1,res);
            visited[next]=false;
        }
        visited[i]=false;
        return ;
    }
};
