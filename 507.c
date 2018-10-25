class Solution {
public:
    bool checkPerfectNumber(int num) {
        int res=1;
        if(num==1)return false;
        int n=sqrt(num);
        for(int i=2;i<=n;i++){
            if(num%i==0)res=res+i+num/i;
        }
        return res==num;
    }
};
