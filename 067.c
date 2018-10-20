class Solution {
public:
    string addBinary(string a, string b) {
        int na=a.size();
        int nb=b.size();
        int ia=na-1;
        int ib=nb-1;
        int c=0;
        string res="";
        while(ia>=0&&ib>=0){
            int temp=a[ia--]-'0'+b[ib--]-'0'+c;
            cout<<temp<<endl;
            if(temp==0){res="0"+res;c=0;}
            if(temp==1){res="1"+res;c=0;}
            if(temp==2){res="0"+res;c=1;}
            if(temp==3){res="1"+res;c=1;}
        }
        while(ia>=0){
            int temp=a[ia--]-'0'+c;
            if(temp==0){res="0"+res;c=0;}
            if(temp==1){res="1"+res;c=0;}
            if(temp==2){res="0"+res;c=1;}
            if(temp==3){res="1"+res;c=1;}
        }
        while(ib>=0){
            int temp=b[ib--]-'0'+c;
            if(temp==0){res="0"+res;c=0;}
            if(temp==1){res="1"+res;c=0;}
            if(temp==2){res="0"+res;c=1;}
            if(temp==3){res="1"+res;c=1;}
        }
        if(c==1)res="1"+res;
        return res;
    }
};
