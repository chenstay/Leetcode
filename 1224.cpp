/*count[a] a出现的次数
freq[c] 几个数字出现c次
只有两种情况需要考虑：
其一是几个数字出现c次*几==n 表示正好 那么下一个是需要去除的
其二是一个数字出现d次 d为1或者其余数字出现次数+1 那么去掉这个数字即可*/
class Solution {
public:
    int maxEqualFreq(vector<int>& nums) {
        int n=nums.size();
        vector<int> count(100001),freq(100001);
        int res=0;
        int a,c,d;
        for(int i=0;i<n;i++){
            a=nums[i];
            freq[count[a]]--;
            c=++count[a];
            freq[count[a]]++;
            if (freq[c]*c == i+1&&i<n-1)
                res=i+2;
                d = i+1-freq[c]*c;
            if ((d==c+1||d==1)&&freq[d]==1)
                res = i+1;
        }
        return res;
    }
};
