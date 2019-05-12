class Solution {
public:
    int maxRotateFunction(vector<int>& A) {
        int n=A.size();
        if(n==0)return 0;
        int m=INT_MIN;
        for(int i=0;i<n;i++){
            int tmp=i;
            int cnt=0;
            long long int res=0;
            while(cnt<n){
                if(tmp==n)tmp=0;
                res+=A[cnt++]*(tmp++);
            }
            m=max(m,(int)res);
        }
        return m;
        // F(i) = F(i-1) + sum - n*A[n-i]
    }
};
