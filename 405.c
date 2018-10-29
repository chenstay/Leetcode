class Solution {
public:
    string toHex(int num) {
        //16进制
        //负数求反码
        string res="";
        if(num>0){
            while(num>0){int tmp=num%16;
            if(tmp>=0&&tmp<=9)res=to_string(num%16)+res;
            if(tmp>=10&&tmp<=15){char a=tmp-10+'a';res=a+res;}
            num=num/16;}
            return res;
        }
        if(num==0)return "0";
        if(num<0){
            num=abs(num);
            string tmp="";
            while(num>0){
                tmp=to_string(num%2)+tmp;
                num=num/2;
            }
            while(tmp.size()!=32)tmp="0"+tmp;
            //cout<<tmp<<endl;
            string tmp2="";
            for(int i=0;i<tmp.size();i++){
                if(tmp[i]=='0')tmp2+="1";
                if(tmp[i]=='1')tmp2+="0";
            }
            //cout<<tmp2<<endl;
            int c=tmp2[tmp2.size()-1]-'0'+1;
            if(c==1)tmp2[tmp2.size()-1]='1';
            int pos=tmp2.size()-2;
            while(c==2&&pos>=0){
                c=tmp2[pos]-'0'+1;
                if(c==1)tmp2[pos]='1';
                tmp2[pos+1]='0';
                pos--;
            }
            //cout<<tmp2<<endl;
            int flag=0;
            int sum=0;
            string res="";
            int i=31;
            while(i>=-1){
                if(flag<4){
                    sum+=(tmp2[i]-'0')*(pow(2,flag));
                    flag++;
                    i--;
                }
                else{
                    //cout<<sum<<endl;
                    if(sum>=0&&sum<=9)res=to_string(sum)+res;
                    if(sum>=10&&sum<=15){char a=sum-10+'a';res=a+res;}
                    flag=0;
                    sum=0;
                }
            }
            return res;
        }
        return res;
    }
};


//use
//uint u=num
//solve when num<0
