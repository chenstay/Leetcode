class RangeModule {
public:
    RangeModule() {
        
    }
    
    void addRange(int left, int right) {
        int i=0;
        int n=v.size();
        vector<pair<int, int>> res;
        while(i<n&&v[i].second<left)res.push_back(v[i++]);
        while(i<n&&v[i].first<=right){
            left=min(v[i].first,left);
            right=max(v[i].second,right);
            i++;
        }
        res.push_back({left,right});
        while(i<n&&v[i].first>right)res.push_back(v[i++]);
        v=res;
    }
    
    bool queryRange(int left, int right) {
        for (auto a : v) {
            if (a.first <= left && a.second >= right) return true;
        }
        return false;
    }
    
    void removeRange(int left, int right) {
        vector<pair<int, int>> res, t;
        int n = v.size(), cur = 0;
        for (int i = 0; i < n; ++i) {
            if (v[i].second <= left) {
                res.push_back(v[i]);
                ++cur;
            } else if (v[i].first >= right) {
                res.push_back(v[i]);
            } else {
                if (v[i].first < left) {
                    t.push_back({v[i].first, left});
                }
                if (v[i].second > right) {
                    t.push_back({right, v[i].second});
                }
            }
        }
        res.insert(res.begin() + cur, t.begin(), t.end());
        v = res;
    }
private:
    vector<pair<int, int>> v;
};

/**
 * Your RangeModule object will be instantiated and called as such:
 * RangeModule obj = new RangeModule();
 * obj.addRange(left,right);
 * bool param_2 = obj.queryRange(left,right);
 * obj.removeRange(left,right);
 */
