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
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> word(wordDict.begin(), wordDict.end());
        int n=s.size();
        queue<int> q{{0}};
        vector<bool> visited(n,0);
        while(!q.empty()){
            int tmp=q.front();
            q.pop();
            if(!visited[tmp]){
                for(int i=tmp+1;i<=n;i++){
                    if(word.count(s.substr(tmp,i-tmp))){
                        q.push(i);
                        if(i==n)return true;
                    }
                }
            }
            visited[tmp]=true;
        }
        return false;
    }
};
