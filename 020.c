class Solution {
public:
    bool isValid(string s) {
        if(s.length()==0)return true;
        if (s.length() % 2 == 1 || s[0] == ')' || s[0] == ']' || s[0] == '}')return false;
        stack<char> temp;
        for(auto &ss : s){
            if(ss=='{'||ss=='['||ss=='(')temp.push(ss);
            if(ss=='}'){
                if(temp.top()=='{')temp.pop();
                else{return false;}
            }
            if(ss==']'){
                if(temp.top()=='[')temp.pop();
                else{return false;}
            }
            if(ss==')'){
                if(temp.top()=='(')temp.pop();
                else{return false;}
            }
        }
        if(!temp.empty())return false;
        else return true;
    }
};
