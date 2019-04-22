class Solution {
public:
    string minWindow(string s, string t) {
        //map<char,int> m;
        vector<int> m(128,0);
        for(auto tt:t)m[tt]++;
        int cnt=0;
        int left=0;
        int minLen=INT_MAX;
        string res="";
        for(int i=0;i<s.size();i++){
            if(--m[s[i]]>=0)cnt++;
            while(cnt==t.size()){
                if(minLen>i-left+1){
                    minLen=i-left+1;
                    res=s.substr(left,minLen);
                }
                if(++m[s[left]]>0)cnt--;
                left++;
            }
        }
        return res;
    }
};
