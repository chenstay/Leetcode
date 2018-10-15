class Solution {
public:
    vector<int> countBits(int num) {
        vector<int> res;
        for(int i=0;i<=num;i++){
            res.push_back(count(i));
        }
        return res;
    }
    int count(int i){
        int sum=0;
        while(i/2!=0){
            if(i%2==1)sum++;
            i=i/2;
        }
        if(i==2||i==1)sum++;
        return sum;
    }
};
