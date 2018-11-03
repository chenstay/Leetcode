class Solution {
public:
    //ref subset problem 78
    int sumSubseqWidths(vector<int>& A) {
        sort(A.begin(),A.end());
        vector<int> path;
        vector<int> sum;
        dfs(A,path,sum,0);
        return accumulate(sum.begin(),sum.end(),0);
    }
    void dfs(vector<int>& A,vector<int>& path,vector<int>& sum,int index){
        if(path.size()>1)sum.push_back(path[path.size()-1]-path[0]);
        for(int i=index;i<A.size();i++){
            path.push_back(A[i]);
            dfs(A,path,sum,i+1);
            path.pop_back();
        }
    }
};
//dfs way exceed time


class Solution {
public:
    int sumSubseqWidths(vector<int>& A) {
        sort(A.begin(),A.end());
        long res=0,c=1,mod=1e9+7;
        int n=A.size();
        for(int i=0;i<n;i++,c=(c<<1)%mod){
            res=(res+A[i]*c-A[n-1-i]*c)%mod;
        }
        return (res+mod)%mod;
    }
    //res = res + A[i] * 2^(i) - A[i] * 2 ^ (N-1-i)
    //A[i] * 2 ^ (N-1-i) equals to A[N-1-i] * 2 ^ (i)
};
