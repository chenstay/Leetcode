class Solution {
public:
    bool backspaceCompare(string S, string T) {
        return backResult(S)==backResult(T);
    }
    stack<char> backResult(string S){
        stack<char> res;
        for(auto word:S){
            if(word=='#'&&!res.empty())res.pop();
            if(word!='#')res.push(word);
        }
        return res;
    }
};
