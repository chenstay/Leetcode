class Solution {
public:
    int integerReplacement(int n) {
        if(n==1)return 0;
        if(n%2==0)return 1+integerReplacement(n/2);
        long long t=n;
        return 2+min(integerReplacement((t+1)/2),integerReplacement((t-1)/2));
    }
};
class Solution {
public:
    int integerReplacement(int n) {
        long long t=n;
        int cnt=0;
        while(t>1){
            if(t&1){//n is odd
                if((t&2)&&(t!=3))t++;//(n+1)%4==0 and n!=3
                else t--;
            }
            else t>>=1;
            cnt++;
        }
        return cnt;
    }
};
