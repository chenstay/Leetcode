//brute force
class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int> tmp;
        for(auto row:matrix){
            for(auto col:row)tmp.push_back(col);
        }
        sort(tmp.begin(),tmp.end());
        return tmp[k-1];
    }
};
