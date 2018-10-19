class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string temp="";
        dfs(n,res,temp,0,0);
        return res;
    }
    void dfs(int n,vector<string>& res,string temp,int left,int right){
        if(right==n){
            res.push_back(temp);
            return;
        }
        if(left<n)dfs(n,res,temp+"(",left+1,right);
        if(right<left)dfs(n,res,temp+")",left,right+1);
    }
};
//添加左括号的条件是左括号数量小于 n，添加右括号的条件是右括号数小于左括号数
