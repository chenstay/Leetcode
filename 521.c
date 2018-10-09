class Solution {
public:
    int findLUSlength(string a, string b) {
        int asize=a.size();
        int bsize=b.size();
        if(asize!=bsize)return max(asize,bsize);
        else if(a!=b)return asize;
        else return -1;
    }
};
