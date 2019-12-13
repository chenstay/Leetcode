class Solution {
public:
    int findCircleNum(vector<vector<int>>& M) {
        int n=M.size();
        vector<bool> visited(n,false);
        int res=0;
        for(int i=0;i<n;i++){
            if(!visited[i]){
                visited[i]=true;
                dfs(M,i,visited);
                res++;
            }
        }
        return res;
    }
    void dfs(vector<vector<int>>& M, int index,vector<bool>& visited){
        int n=M.size();
        for(int i=0;i<n;i++){
            if(i!=index&&!visited[i]&&M[index][i]==1){
                visited[i]=true;
                dfs(M,i,visited);
            }
        }
        return ;
    }
};
