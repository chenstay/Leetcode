class Solution {
public:
    string convertToTitle(int n) {
        string res="";
        string tmp=" ABCDEFGHIJKLMNOPQRSTUVWXY";
        while(n){
            int r=n%26;
            n=n/26;
            if(r==0){   //为26的整数倍，该位设置为Z，n减掉1
                res='Z'+res;
                n--;
            }
            else{
                res=tmp[r]+res;
            }
        }
        return res;
    }
};
