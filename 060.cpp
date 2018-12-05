class Solution {
public:
    string getPermutation(int n, int k) {
/*a1 = k / (n - 1)!
k1 = k % (n - 1)!

a2 = k1 / (n - 2)!
k2 = k1 % (n - 2)!
...

an-1 = kn-2 / 1!
kn-1 = kn-2 % 1!

an = kn-1 / 0!
kn = kn-1 % 0!*/
        string res;
        string num = "123456789";
        vector<int> f(n, 1);
        for(int i=1;i<n;i++)f[i]=f[i-1]*i;//f[i]=i!
        k--;
        for(int i=n-1;i>=0;i--){
            int a=k/f[i];
            k%=f[i];
            res.push_back(num[a]);
            num.erase(a,1);
        }
        return res;
    }
};
