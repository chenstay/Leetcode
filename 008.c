class Solution {
public:
    int myAtoi(string str) {
        int i=0,tmp=0,n=str.size(),flag=1;
        while(str[i]==' ')i++;
        if(str[i]=='+'||str[i]=='-')flag=(str[i++]=='-')?-1:1;
        while(i<n&&str[i]>='0'&&str[i]<='9'){
            if(tmp>INT_MAX/10||(tmp==INT_MAX/10&&str[i]-'0'>INT_MAX%10))
                return (flag==1)?INT_MAX:INT_MIN;
            tmp=tmp*10+(str[i++]-'0');
        }
        return tmp*flag;
    }
};
