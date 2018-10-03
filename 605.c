class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int num=flowerbed.size();
        if(n==0)return true;
        if(num==1&&(flowerbed[0])==0&&n==1)return true;
        int cnt=0;
        bool a=false;
        if(flowerbed[0]==0&&flowerbed[1]==0){
            flowerbed[0]=1;
            cnt++;
        }
        for(int i=1;i<num-1;i++){
            if(flowerbed[i-1]==0&&flowerbed[i+1]==0&&flowerbed[i]==0){
                flowerbed[i]=1;
                cnt++;
                //cout<<cnt<<endl;
            }
        }
        if(flowerbed[num-1]==0&&flowerbed[num-2]==0)cnt++;
        if(cnt>=n)a=true;
        return a;
    }
};
