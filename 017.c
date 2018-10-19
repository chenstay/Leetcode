class Solution {
public:
    vector<string> letterCombinations(string digits) {
        string phonenum[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        int n=digits.size();
        vector<string> res;
        if(n==0)return res;
        string tmp(n,' ');
        dfs(phonenum,digits,res,tmp,0);
        return res;
    }
    void dfs(string phonenum[],string digits,vector<string> &res,string tmp,int index){
        if(index==digits.size()){
            res.push_back(tmp);
            return ;
        }
        for(int i=0;i<phonenum[digits[index]-'0'].size();i++){
            tmp[index]=phonenum[digits[index]-'0'][i];
            dfs(phonenum,digits,res,tmp,index+1);
        }
    }
};
