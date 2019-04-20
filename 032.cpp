class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> tmp;
        int n=s.size();
        int res=0;
        int start=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(')tmp.push(i);
            else if(s[i]==')'){
                if(tmp.empty())start=i+1;
                else{
                    tmp.pop();
                    res=tmp.empty()?max(res,i-start+1):max(res,i-tmp.top());
                }
            }
        }
        return res;
    }
};
class Solution {
public:
    int longestValidParentheses(string s) {
        int n=s.size();
        vector<int> dp(n+1,0);
        int left=0;
        int res=0;
        for(int i=0;i<n;i++){
            if(s[i]=='(')left++;
            else if(s[i]==')'&&left>0){
                dp[i+1]=dp[i]+2;
                dp[i+1]+=dp[i+1-dp[i+1]];
                left--;
            }
            res=max(res,dp[i+1]);
        }
        return res;
    }
};
