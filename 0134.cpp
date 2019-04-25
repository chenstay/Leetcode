class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum=0;
        int total=0;
        int n=gas.size();
        int start=0;
        for(int i=0;i<n;i++){
            total+=gas[i]-cost[i];
            sum+=gas[i]-cost[i];
            if(sum<0){
                start=i+1;
                sum=0;
            }
        }
        return total>=0?start:-1;
    }
};
