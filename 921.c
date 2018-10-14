class Solution {
public:
    int minAddToMakeValid(string S) {
        int n=S.size();
        if(n==0)return 0;
        if(n==1)return 1;
        vector<char> temp;
        int sum=0;
        for(int i=0;i<n;i++){
            if(S[i]=='(')temp.push_back(S[i]);
            if(!temp.empty()&&S[i]==')'&&temp.back()=='('){temp.pop_back();sum++;}
        }
        return n-sum*2;
    }
};
