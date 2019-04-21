class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        for(auto &cost:costs)cost[0]-=cost[1];
        sort(costs.begin(),costs.end());
        int res=0;
        int n=costs.size();
        for(int i=0;i<n/2;i++){
            res+=costs[i][0]+costs[i][1]+costs[i+n/2][1];
        }
        return res;
    }
};
/*sort(begin(costs), end(costs), [](vector<int> &v1, vector<int> &v2) {
    return (v1[0] - v1[1] < v2[0] - v2[1]);
  });*/
