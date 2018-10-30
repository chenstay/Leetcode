vector<string> one={"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
vector<string> ten={"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
vector<string> thousand={"", "Thousand", "Million", "Billion"};
class Solution {
public:
    string numberToWords(int num) {
        if(num==0)return "Zero";
        string res="";
        int flag=0;
        while(num>0){
            if(num%1000>0)res=judge(num%1000)+thousand[flag]+" "+res;
            num/=1000;
            flag++;
        }
        res.erase(0,res.find_first_not_of(" "));
        res.erase(res.find_last_not_of(" ") + 1);//remove " " in the last
        return res;
    }
    string judge(int num){
        if(num==0)return "";
        else if(num<20)return one[num]+" ";
        else if(num<100)return ten[num/10]+" "+judge(num%10);
        else return one[num/100]+" Hundred "+judge(num%100);
    }
};
