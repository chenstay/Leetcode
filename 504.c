class Solution {
public:
    string convertToBase7(int num) {
        string res=convert(abs(num));
        if(num<0)return "-"+res;
        if(num==0)return "0";
        else return res;
    }
    string convert(int num){
        string res="";
        while(num!=0){
            res=to_string(num%7)+res;
            num/=7;
        }
        return res;
    }
};
