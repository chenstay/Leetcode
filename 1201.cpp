class Solution {
public:
    int nthUglyNumber(int n, int a, int b, int c) {
        int lo = 1, hi = 2e9;
        long aa = long(a), bb = long(b), cc = long(c);
        long ab = aa * bb / __gcd(aa, bb);
        long bc = bb * cc / __gcd(bb, cc);
        long ac = aa * cc / __gcd(aa, cc);
        long abc = a * bc / __gcd(aa, bc);
        while(lo < hi) {
            int mid = lo + (hi - lo)/2;
            int cnt = mid/aa + mid/bb + mid/cc - mid/ab - mid/bc - mid/ac + mid/abc;
            if(cnt < n) 
                lo = mid + 1;
            else
			   //the condition: F(N) >= k
                hi = mid;
        }
        return lo;
    }
};
