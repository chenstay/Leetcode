class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> word(wordDict.begin(),wordDict.end());
        int n=s.size();
        vector<bool> dp(n+1,0);
        dp[0]=true;
        for(int i=0;i<n+1;i++){
            for(int j=0;j<i;j++){
                if(dp[j]&&word.count(s.substr(j,i-j))){
                    dp[i]=true;
                    break;
                }
            }
        }
        return dp.back();
    }
};
