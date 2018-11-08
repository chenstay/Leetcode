class Solution {
public:
    bool judgeSquareSum(int c) {
        if(c<0)return false;
        int left=0;int right=sqrt(c);
        while(left<=right){
            int sum=left*left+right*right;
            if(sum>c)right--;
            if(sum<c)left++;
            if(sum==c)return true;
        }
        return false;
    }
};
