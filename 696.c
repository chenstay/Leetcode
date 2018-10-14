class Solution {
public:
    int countBinarySubstrings(string s) {
        int n=s.size();
        int sum=0;
        for(int i=0;i<n-1;i++){
             if(s[i]=='0'&&s[i+1]=='1'){sum+=judge1(s,i);}
             if(s[i]=='1'&&s[i+1]=='0'){sum+=judge2(s,i);}
        }
        return sum;
    }
    int judge1(string s,int i){
        int p=i;int q=i+1;
        while(s[p]=='0'&&s[q]=='1'&&p>=0&&q<s.size()){
            p--;
            q++;
        }
        return i-p;
    }
    int judge2(string s,int i){
        int p=i;int q=i+1;
        while(s[p]=='1'&&s[q]=='0'&&p>=0&&q<s.size()){
            p--;
            q++;
        }
        return i-p;
    }
};
