class Solution {
public:
    bool reorderedPowerOf2(int N) {
        //利用字符串对数字排序后对比得到结果
        string tmp=to_string(N);
        sort(tmp.begin(),tmp.end());
        for(int i=0;i<31;i++){
            string r=to_string(1<<i);
            sort(r.begin(),r.end());
            if(r==tmp)return true;
        }
        return false;
    }
};
