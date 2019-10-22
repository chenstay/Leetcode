class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int res=0;
        double cur=0;
        map<int,double> times;
        for(int i=0;i<position.size();i++){
            times[-position[i]]=(double)(target-position[i])/speed[i];
        }
        for(auto time:times){
            if(time.second<=cur)continue;
            cur=time.second;
            res++;
        }
        return res;        
    }
};
