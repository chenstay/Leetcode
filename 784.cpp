class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        vector<string> res{""};
        for(auto word:S){
            int n=res.size();
            if(word>='0'&&word<='9'){
                for(auto &re:res)re.push_back(word);
            }
            else{
                for(int i=0;i<n;i++){
                    res.push_back(res[i]);
                    res[i].push_back(tolower(word));
                    res[n+i].push_back(toupper(word));
                }
            }
        }
        return res;
    }
};
//2
class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        vector<string> res;
        helper(S,res,0);
        return res;
    }
    void helper(string& S,vector<string>& res,int pos){
        if(pos==S.size()){
            res.push_back(S);
            return ;
        }
        helper(S,res,pos+1);
        if(S[pos]>'9'){
            S[pos]^=32;
            helper(S,res,pos+1);
        }
    }
};
//3
class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        vector<string> res;
        int cnt=0;
        for(auto word:S)if(word>'9')cnt++;
        for(int i=0;i<(1<<cnt);i++){
            int j=0;
            string tmp="";
            for(auto word:S){
                if(word>'9'){
                    if((i>>j++)&1==1)tmp.push_back(tolower(word));
                    else tmp.push_back(toupper(word));
                }
                else tmp.push_back(word);
            }
            res.push_back(tmp);
        }
        return res;
    }
};
