class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n=cost.size();
        vector<int> stand(n);
        stand[0]=cost[0];
        stand[1]=cost[1];
        for(int i=0;i<n;i++){
            stand[i]=min(stand[i-2]+cost[i],stand[i-1]+cost[i]);
        }
        return min(stand[n-1],stand[n-2]);
    }
};
