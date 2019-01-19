class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> res,m1(256,0),m2(256,0);
        for(int i=0;i<s1.size();i++){
            m1[s1[i]]++;
            m2[s2[i]]++;
        }
        if(m1==m2)return true;
        for(int i=s1.size();i<s2.size();i++){
            m2[s2[i]]++;
            m2[s2[i-s1.size()]]--;
            if(m1==m2)return true;
        }
        return false;
    }
};
//same as 438、242
