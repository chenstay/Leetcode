class Solution {
public:
    vector<int> numOfBurgers(int tomatoSlices, int cheeseSlices) {
        vector<int> res;
        int tmp=tomatoSlices/2;
        if(tomatoSlices%2!=0||tmp<cheeseSlices||tmp>2*cheeseSlices)return res;
        res.push_back(tmp-cheeseSlices);
        res.push_back(2*cheeseSlices-tmp);
        return res;
    }
};
//二元一次方程组
