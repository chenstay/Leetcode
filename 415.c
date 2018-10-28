class Solution {
public:
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
