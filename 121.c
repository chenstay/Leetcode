class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n<2)return 0;
        int res=0;
        vector<int> B(n);
        B[0]=prices[0];
        for(int i=1;i<n;i++){
            B[i]=min(B[i-1],prices[i]);//B[i]=min{prices[0],...,prices[i]}
        }
        for(int i=0;i<n-1;i++){
            if((prices[i+1]-B[i])>res)res=prices[i+1]-B[i];
        }
        return res;
    }
};
