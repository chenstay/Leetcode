class Solution {
public:
    bool isPowerOfTwo(int n) {
        while(n%2==0&&n>1){
            n/=2;
        }
        return n==1;
    }
};
//solution 1 Integer.bitCount(n)==1 
//returns the number of one-bits in the two's complement binary representation of the specified int value i

//solution 2 return n > 0 && (n & (n -1)) == 0;
//位操作
//如果一个数是2的次方数的话，那么它的二进数必然是最高位为1，其它都为0
//那么如果此时我们减1的话，则最高位会降一位，其余为0的位现在都为变为1，那么我们把两数相与，就会得到0
