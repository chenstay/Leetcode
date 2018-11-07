class Solution {
public:
    string multiply(string num1, string num2) {
        string res="";
        int n=num2.size()-1;
        for(int i=n;i>=0;i--){
            cout<<multiply2(num2[i],num1,n-i)<<endl;
            res=addStrings(multiply2(num2[i],num1,n-i),res);
        }
        return res;
    }
    string multiply2(char a,string num,int i){
        int tmp=0;
        string res="";
        int c=a-'0';
        if(c==0||num==""||num=="0")return "0";
        for(int i=num.size()-1;i>=0;i--){
            tmp+=c*(num[i]-'0');
            res+='0'+tmp%10;
            tmp=tmp/10;
        }
        if(tmp>0)res+='0'+tmp;
        reverse(res.begin(),res.end());
        for(int j=0;j<i;j++){
            res+="0";
        }
        return res;
    }
    string addStrings(string num1, string num2) {
        int n1=num1.size();
        int n2=num2.size();
        int i=n1-1;
        int j=n2-1;
        int tmp=0;
        string sum="";
        int c=0;
        while(i>=0||j>=0){
            //tmp+=c;
            if(i>=0)tmp+=num1[i]-'0';
            if(j>=0)tmp+=num2[j]-'0';
            sum=to_string(tmp%10)+sum;
            tmp=tmp/10;
            i--;
            j--;
        }
        if(tmp)sum=to_string(tmp)+sum;
        return sum;
    }
};
