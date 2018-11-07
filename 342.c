//relate to power of two 231
//relate to power of three 326
class Solution {
public:
    bool isPowerOfFour(int num) {
        while(num%4==0&&num>1){
            num/=4;
        }
        return num==1;
    }
};
