class Solution {
public:
    int minimumLengthEncoding(vector<string>& words) {
        unordered_set s(words.begin(),words.end());
        for(auto w:s){
            for(int i=1;i<w.size();i++)
                s.erase(w.substr(i));
        }
        int num=0;
        for(auto w:s)num+=w.size()+1;
        return num;
    }
};
