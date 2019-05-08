class Solution {
public:
    string removeKdigits(string num, int k) {
        int drop=k;
        string res="";
        for(auto n:num){
            while(drop>0&&!res.empty()&&n<res.back()){
                drop--;
                res.pop_back();
            }
            res+=n;
        }
        res.resize(num.size()-k);
        //move out the front "0"
        while (!res.empty() && res[0] == '0') res.erase(res.begin());
        return res.empty() ? "0" : res;
    }
};
