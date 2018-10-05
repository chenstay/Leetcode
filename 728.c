class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> res;
        for(int i=left;i<=right;i++){
            int a1=i%10;
            int a2=(i/10)%10;
            int a3=((i/10)/10)%10;
            int a4=(((i/10)/10)/10)%10;
            if(i>0&&i<10)res.push_back(i);
            if(i>10&&i<100&&a1!=0&&i%a1==0&&i%a2==0)res.push_back(i);
            if(i>100&&i<1000&&a1!=0&&a2!=0&&i%a1==0&&i%a2==0&&i%a3==0)res.push_back(i);
            if(i>1000&&i<10000&&a1!=0&&a2!=0&&a3!=0&&i%a1==0&&i%a2==0&&i%a3==0&&i%a4==0)res.push_back(i);
        }
        return res;
    }
};
