class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int n=prices.size();
        vector<int> have(n,0);
        vector<int> dont_have(n,0);
        have[0]=-prices[0];
        for(int i=1;i<n;i++){
            have[i]=max(have[i-1],dont_have[i-1]-prices[i]);
            dont_have[i]=max(dont_have[i-1],have[i-1]+prices[i]-fee);
        }
        return dont_have[n-1];
    }
};
/*对于 have[i] 
第 i 天买入的情况：收益为  dont_have[i-1] -prices[i]   （此时说明前一天不持有股票）
第 i 天继续持仓的情况：收益为  have[i-1]  (此时说明前一天也持有)

对于 dont_have[i] 
对于第 i 天卖出的情况，算上每笔交易的手续费，此时收益为 have[i-1] +prices[i]-fee
对于继续不买入的情况，收益与前一天相同，为 dont_have[i-1]*/
