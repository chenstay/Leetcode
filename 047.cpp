class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int> > res;
        permuteDFS(nums, 0, res);
        return res;
    }
    void permuteDFS(vector<int> &num, int start, vector<vector<int> > &res) {
        if (start >= num.size()&&find(res.begin(),res.end(),num)==res.end()) {res.push_back(num);}
        for (int i = start; i < num.size(); ++i) {
            swap(num[start], num[i]);
            permuteDFS(num, start + 1, res);
            swap(num[start], num[i]);
        }
    }
};

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int> > res;
        permuteDFS(nums, 0, res);
        return vector<vector<int>> (res.begin(), res.end());
    }
    void permuteDFS(vector<int> &num, int start, set<vector<int> > &res) {
        if (start >= num.size()) {res.insert(num);}
        for (int i = start; i < num.size(); ++i) {
            swap(num[start], num[i]);
            permuteDFS(num, start + 1, res);
            swap(num[start], num[i]);
        }
    }
};

