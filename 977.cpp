class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        vector<int> res;
        for(auto word:A)res.push_back(word*word);
        sort(res.begin(),res.end());
        return res;
    }
};
