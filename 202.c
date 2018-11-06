class Solution {
public:
    bool isHappy(int n) {
        int N=20;
        int tmp=n;
        while(--N>0&&tmp>1){
            tmp=0;
            while(n!=0){
                tmp+=(n%10)*(n%10);
                n/=10;
            }
            n=tmp;
        }
        return tmp==1;
    }
};
