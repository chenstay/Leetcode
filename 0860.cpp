class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        //if have 20 return 15=10+5 or 5+5+5
        //if have 10 return 5
        //if have 5 not return 
        vector<int> coin(2,0);
        for(auto bill:bills){
            if(bill==5)coin[0]++;
            else if(bill==10){
                if(coin[0]<1)return false;
                coin[0]--;
                coin[1]++;
            }
            else {
                if(coin[1]>0&coin[0]>0){coin[1]--;coin[0]--;}
                else if(coin[0]>=3)coin[0]=coin[0]-3;
                else return false;
            }
        }
        return true;
    }
};
