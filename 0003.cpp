class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> m;
        int left=-1;
        int maxLen=0;
        for(int i=0;i<s.size();i++){
            if(m.count(s[i])&&m[s[i]]>left)left=m[s[i]];
            m[s[i]]=i;
            maxLen=max(maxLen,i-left);
        }
        return maxLen;
    }
};
//my answer
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char,int> m;
        int left=0;
        int maxLen=0;
        for(int i=0;i<s.size();i++){
            m[s[i]]++;
            while(m[s[i]]!=1){
                m[s[left++]]--;
            }
            maxLen=max(maxLen,i-left+1);
        }
        return maxLen;
    }
};  
