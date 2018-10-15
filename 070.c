class Solution {
public:
    int climbStairs(int n) {
        int n1=0;
        int n2=1;
        for(int i=1;i<=n;i++){
            int temp=n1+n2;
            n1=n2;
            n2=temp;
        }
        return n2;
    }
};
