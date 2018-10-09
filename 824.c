class Solution {
public:
    string toGoatLatin(string S) {
        int n=S.size();
        int cnt=1;
        string temp="";
        string res="";
        //int i=0;
        for(int i=0;i<n;i++){
            if(S[i]!=' ')temp+=S[i];
            if(S[i]==' '){
                if(temp[0]=='a'||temp[0]=='e'||temp[0]=='i'||temp[0]=='o'||temp[0]=='u'||temp[0]=='A'||temp[0]=='E'||temp[0]=='I'||temp[0]=='O'||temp[0]=='U'){
                    for(int l=0;l<temp.size();l++)res+=temp[l];
                }
                else{
                    for(int k=1;k<temp.size();k++)res+=temp[k];
                    res+=temp[0];
                }
                res+="ma";
                for(int j=0;j<cnt;j++)res+='a';
                res+=' ';
                cnt++;
                temp.clear();
            }
            if(i==n-1){
                if(temp[0]=='a'||temp[0]=='e'||temp[0]=='i'||temp[0]=='o'||temp[0]=='u'||temp[0]=='A'||temp[0]=='E'||temp[0]=='I'||temp[0]=='O'||temp[0]=='U'){
                    for(int l=0;l<temp.size();l++)res+=temp[l];
                }
                else{
                    for(int k=1;k<temp.size();k++)res+=temp[k];
                    res+=temp[0];
                }
                res+="ma";
                for(int j=0;j<cnt;j++)res+='a';
            }
        }
        return res;
    }
};
