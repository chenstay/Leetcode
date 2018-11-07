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

//return n > 0 && (n & (n -1)) == 0 && (n-1)%3==0;
/*
Here is my explanation:
The(num - 1) % 3 == 0is used to distinguish the 4^n from 2^n.
2^n = (3-1)^n = C(n,0)3^n(-1)^0+....+(-1)^n.
1.When 2^n is 4^n, which means n is even, in this case, (-1)^n==1 and (2^n-1）%3==0
2.When 2&n is not 4^n, which means n is odd, in this case, (-1)^n=-1 and (2^n-1）%3==1；
This is why we can use(num-1)%3==0 as a condition to sperate 4^n from 2^n.
*/
//fro https://leetcode.com/problems/power-of-four/discuss/80460/1-line-C%2B%2B-solution-without-confusing-bit-manipulations
