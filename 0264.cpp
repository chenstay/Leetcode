class Solution {
public:
    int nthUglyNumber(int n) {
        int l1=0,l2=0,l3=0;
        vector<int> res(1,1);
        while(res.size()<n){
            int m1=res[l1]*2;
            int m2=res[l2]*3;
            int m3=res[l3]*5;
            int mn=min(m1,min(m2,m3));
            res.push_back(mn);
            if(m1==mn)l1++;
            if(m2==mn)l2++;
            if(m3==mn)l3++;
        }
        return res.back();
    }
};
