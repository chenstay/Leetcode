class Solution {
public:
    bool detectCapitalUse(string word) {
        bool res=true;
        int n=word.size();
        if(n==1)return res;
        if(n==2){
            if(word[0]>='a'&&word[0]<='z'&&word[1]>='A'&&word[1]<='Z')return false;
            else return res;
        }
        if(word[0]>='a'&&word[0]<='z'){
            for(int i=1;i<n;i++)if(word[i]>='A'&&word[i]<='Z')res=false;
        }
        if(word[0]>='A'&&word[0]<='Z'){
            if(word[1]>='a'&&word[1]<='z'){
                for(int i=2;i<n;i++)if(word[i]>='A'&&word[i]<='Z')res=false;
            }
            if(word[1]>='A'&&word[1]<='Z'){
                for(int i=2;i<n;i++)if(word[i]>='a'&&word[i]<='z')res=false;
            }
        }
        return res;
    }
};
