class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
        int n1=s1.size();
        int n2=s2.size();
        int sum=0;
        for(int i=0;i<n1;i++){
            sum+=int(s1[i]);
        }
        for(int i=0;i<n2;i++){
            sum+=int(s2[i]);
        }
        vector<vector<int>> num(n1+1,vector<int>(n2+1,0));
        for(int i=1;i<=n1;i++){
            for(int j=1;j<=n2;j++){
                if(s1[i-1]==s2[j-1])num[i][j]=num[i-1][j-1]+int(s1[i-1]);
                else{
                    num[i][j]=max(num[i-1][j],num[i][j-1]);
                }
            }
        }
        return sum-num[n1][n2]*2;
    }
};
