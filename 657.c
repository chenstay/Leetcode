class Solution {
public:
    bool judgeCircle(string moves) {
        int x=0;
        int y=0;
        int n=moves.length();
        if(n==0)return true;
        if(n%2==1)return false;
        for(int i=0;i<n;i++){
            if(moves[i]=='U')y++;
            if(moves[i]=='R')x++;
            if(moves[i]=='D')y--;
            if(moves[i]=='L')x--;
        }
        if(x==0&&y==0)return true;
        return false;
    }
};
