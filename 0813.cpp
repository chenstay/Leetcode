class Solution {
public:
    double largestSumOfAverages(vector<int>& A, int K) {
        double res=0.0;
        double curSum=0.0;
        dfs(A,K,0,curSum,res);
        return res;
    }
    void dfs(vector<int>& A,int K,int index,double curSum,double& res){
        if(K==1){
            curSum+=(double)accumulate(A.begin()+index,A.end(),0)/(A.size()-index);
            res=max(res,curSum);
            return ;
        }
        for(int i=index+1;i<=A.size()-K+1;i++){
            double tmp=(double)accumulate(A.begin()+index,A.begin()+i,0)/(i-index);
            curSum+=tmp;
            dfs(A,K-1,i,curSum,res);
            curSum-=tmp;
        }
        return ;
    }
    
};
//DFS==TLE
