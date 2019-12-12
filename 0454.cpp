class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        map<int,int> ab,cd;
        ab=cal(A,B);
        cd=cal(C,D);
        int res=0;
        for(auto num:ab){
            res+=num.second*cd[-(num.first)];
        }
        return res;
    }
    map<int,int> cal(vector<int>& A, vector<int>& B){
        map<int,int> m;
        for(auto aa:A){
            for(auto bb:B){
                m[aa+bb]++;
            }
        }
        return m;
    }
};
