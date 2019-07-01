class Solution {
public:
    int checkRecord(int n) {
/*A0L0 => 沒有A 末尾没有L
A0L1 => 沒有A 只有1L
A0L2 => 沒有A 只有2L
A1L0 => 有1A 没有L
A1L1 => 有1A 只有1L
A1L2 => 有1A 只有2L*/
        vector<unsigned int>A0L0(n+1), A0L1(n+1), A0L2(n+1), A1L0(n+1), A1L1(n+1), A1L2(n+1);
        A0L0[0] = 1;
        A0L1[0] = 1;
        A0L2[0] = 0;
        A1L0[0] = 1;
        A1L1[0] = 0;
        A1L2[0] = 0;
        int mod=1000000007;
        for(int i=1;i<n+1;i++){
            A0L0[i] = (A0L0[i-1] + A0L1[i-1] + A0L2[i-1])%mod;
            A0L1[i] = A0L0[i-1];
            A0L2[i] = A0L1[i-1];

            A1L0[i] = (A1L0[i-1] + A1L1[i-1] + A1L2[i-1] + A0L0[i])%mod;
            A1L1[i] = A1L0[i-1];
            A1L2[i] = A1L1[i-1];
        }
        return A1L0[n];
    }
};
