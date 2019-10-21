class Solution {
public:
    vector<int> sums;
    vector<vector<int>> hash;
    
    int stoneGameII(vector<int>& piles) {
        //M=1 1<=X<=2M M = max(M, X)
        int n=piles.size();
        if(n==0)return 0;
        sums=vector<int>(n,0);
        sums[n-1]=piles[n-1];
        for(int i=n-2;i>=0;i--){
            sums[i]=sums[i+1]+piles[i];//i...end
        }
        hash=vector(n,vector<int>(n,0));
        return helper(piles,0,1); 
    }
    
    int helper(vector<int> piles,int i,int M){//return sum of next player from i to end
        if(i==piles.size())return 0;
        if(i+2*M>=piles.size())return sums[i];
        if(hash[i][M]!=0)return hash[i][M];
        int tmp=INT_MAX;
        for(int j=1;j<=2*M;j++){
            tmp=min(tmp,helper(piles,i+j,max(M,j)));
        }
        hash[i][M]=sums[i]-tmp; 
        return hash[i][M]; 
    }
};
