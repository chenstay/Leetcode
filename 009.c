class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        if(x==0)return true;
        int res=x;
        int tmp=0;
        while(res>0){
            tmp*=10;
            tmp+=res%10;
            res/=10;
        }
        return tmp==x;
    }
};
