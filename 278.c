// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left=1;
        int right=n;
        while(left<right){
            int mid=left+(right-left)/2;
            if(isBadVersion(mid))right=mid;
            else {
                if(isBadVersion(mid+1))return mid+1;
                left=mid+1;
            }
        }
        return 1;
    }
};
//tip left+(right-left)/2 instead of (left+right)/2
