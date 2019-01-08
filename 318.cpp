class Solution {
public:
    int maxProduct(vector<string>& words) {
        int res=0;
        vector<int> tmp(words.size(),0);
        for(int i=0;i<words.size();i++){
            for(auto word:words[i])tmp[i]|=1<<(word-'a');
            for(int j=0;j<i;j++)
                if((tmp[i]&tmp[j])==0)//no duplicate
                    res=max(res,int(words[i].size()*words[j].size()));
        }
        return res;
    }
};
