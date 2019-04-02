class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int> m;
        for(auto word:s)m[word]++;
        for(auto word:t){
            if(--m[word]<0)
                return word;
        }
        return 0;
    }
};
//way2
return accumulate(begin(s), end(s += t), 0, bit_xor<int>());
