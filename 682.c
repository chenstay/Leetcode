class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> all;
        for (string s : ops)
        {
            if (s == "+")
                all.push_back(all[all.size() - 1] + all[all.size() - 2]);
            else if (s == "D")
                all.push_back(all[all.size() - 1] * 2);
            else if (s == "C")
                all.pop_back();
            else
                all.push_back(stoi(s));
        }
        return accumulate(all.begin(), all.end(), 0);
    }
};
