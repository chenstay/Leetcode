class Solution {
public:
    string convert(string s, int numRows) {
        int n=s.size();
        if(n==0)return "";
        if(numRows==1)return s;
        int temp=(n-1)/(numRows-1);
        string res="";
        if(temp%2==0){
            for(int j=0;j<=temp/2;j++){
                res+=s[j*(numRows-1)*2];
            }
            for(int i=1;i<numRows-1;i++){
                res+=s[i];
                for(int j=1;j<=temp/2;j++){               
                    res+=s[j*(numRows-1)*2-i];
                    if((j*(numRows-1)*2+i)<s.size())res+=s[j*(numRows-1)*2+i];
                }
            }
            cout<<res<<endl;
            for(int j=0;j<temp/2;j++){
                res+=s[(j*2+1)*(numRows-1)];
            }
        }
        if(temp%2==1){
            for(int j=0;j<=temp/2;j++){
                res+=s[j*(numRows-1)*2];
            }
            for(int i=numRows-2;i>0;i--){
                for(int j=0;j<=temp/2;j++){               
                    res+=s[(j*2+1)*(numRows-1)-i];
                    if(((j*2+1)*(numRows-1)+i)<n)res+=s[(j*2+1)*(numRows-1)+i];
                }
            }
            for(int j=0;j<=temp/2;j++){
                res+=s[(j*2+1)*(numRows-1)];
            }
        }
        return res;
    }
};
