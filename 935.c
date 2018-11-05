class Solution {
    int dir[8][2]={{-1,-2},{-1,2},{-2,-1},{-2,1},{1,-2},{1,2},{2,-1},{2,1}};
    int mod=1e9+7;
    int chess[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,0,10}};
public:
    int knightDialer(int N) {
        vector<vector<int>> chess;
        vector<int> tmp;
        tmp.push_back(1);tmp.push_back(2);tmp.push_back(3);chess.push_back(tmp);tmp.clear();
        tmp.push_back(4);tmp.push_back(5);tmp.push_back(6);chess.push_back(tmp);tmp.clear();
        tmp.push_back(7);tmp.push_back(8);tmp.push_back(9);chess.push_back(tmp);tmp.clear();
        tmp.push_back(10);tmp.push_back(0);tmp.push_back(10);chess.push_back(tmp);tmp.clear();
        int sum=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                sum+=dfs(chess,N,i,j,1)%mod;
            }
        }
        sum+=dfs(chess,N,3,1,1)%mod;
        return (sum+mod)%mod;
    }
private:
    int dfs(vector<vector<int>>& chess,int N,int i,int j,int index){
        if(index==N)return 1;
        int sum=0;
        for(int k=0;k<8;k++){
            int new_i=i+dir[k][0];
            int new_j=j+dir[k][1];
            if(new_i>=0&&new_j>=0&&new_j<3&&new_i<4&&chess[new_i][new_j]!=10)
                sum+=dfs(chess,N,new_i,new_j,index+1);
        }
        return sum;
    }
};

class Solution {
public:
    int knightDialer(int N) {
        //f[i][j] means reach number i by step j+1
        long long int f[10][5000];
        memset(f, -1, sizeof(f));
        const long long int MOD = 1e9+7;
        long long int ans = 0;
        for (int i = 0; i < 10; i++) f[i][0] = 1;
        for (int i = 1; i < N; i++) {
            f[0][i] = (f[4][i-1] + f[6][i-1]) % MOD;
            f[1][i] = (f[6][i-1] + f[8][i-1]) % MOD;
            f[2][i] = (f[7][i-1] + f[9][i-1]) % MOD;
            f[3][i] = (f[4][i-1] + f[8][i-1]) % MOD;
            f[4][i] = (f[0][i-1] + f[3][i-1] + f[9][i-1]) % MOD;
            f[5][i] = 0;
            f[6][i] = (f[0][i-1] + f[1][i-1] + f[7][i-1]) % MOD;
            f[7][i] = (f[2][i-1] + f[6][i-1]) % MOD;
            f[8][i] = (f[1][i-1] + f[3][i-1]) % MOD;
            f[9][i] = (f[2][i-1] + f[4][i-1]) % MOD;
        }
        for (int i = 0; i < 10; i++)
            ans = (ans + f[i][N-1]) % MOD;
        return ans;
    }
};
//https://zhanghuimeng.github.io/post/leetcode-935-knight-dialer/
