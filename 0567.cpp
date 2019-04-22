class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> m(128,0);
        vector<int> tmp(128,0);
        for(auto tt:s1)m[tt]++;
        int cnt=0;
        int left=0;
        bool res=false;
        for(int i=0;i<s2.size();i++){
            if(--m[s2[i]]>=0)cnt++;
            while(cnt==s1.size()){
                if(m==tmp){
                    return true;
                }
                if(++m[s2[left]]>0)cnt--;
                left++;
            }
        }
        return res;
    }
};
//the same as 0076
