class Solution {
public:
    int calculate(string s) {
        int n=s.size();
        int res=0;
        int flag=1;
        stack<int> tmp;
        for(int i=0;i<n;i++){
            if(s[i]>='0'){
                int num=0;
                while(s[i]>='0'&&i<n){
                    num=num*10+(s[i++]-'0');
                }
                res+=flag*num;
                i--;
            }else if(s[i]=='+'){
                flag=1;
            }else if(s[i]=='-'){
                flag=-1;
            }else if(s[i]=='('){
                tmp.push(res);
                tmp.push(flag);
                
                flag=1;
                res=0;
            }else if(s[i]==')'){
                res*=tmp.top();
                tmp.pop();
                res+=tmp.top();
                tmp.pop();
            }
        }
        return res;
    }
};
