class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        int n=deck.size();
        if(n==1)return false;
        int i=1;
        while(deck[i]==deck[0])i++;//i=Xmax
        for(int l=2;l<=i;l++)
        {
            if(pinpan(deck,l)==true)return true;
        }
        return false;

    }
    bool pinpan(vector<int>& deck, int i)
    {
        int n=deck.size();
        bool a=true;
        if(n%i!=0)a=false;
        int zushu=n/i;
        for(int j=0;j<zushu;j++)
        {
            for(int k=0;k<i;k++)
            {
                if(deck[j*i]!=deck[j*i+k])a=false;
            }
        }
        return a;
    }
};
