class Solution {
public:
    bool isPerfectSquare(int num) {
        int left=1;int right=num;
        int mid;
        while(left<=right){
            mid=left+(right-left)/2;
            if(mid>num/mid)right=mid-1;
            else if(mid<num/mid)left=mid+1;
            else break;
        }
        return mid*mid==num;
    }
};
