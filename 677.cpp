class MapSum {
public:
    /** Initialize your data structure here. */
    MapSum() {      
    }
    void insert(string key, int val) {
        for(int i=1;i<key.size();i++){
            m[key.substr(0, i)].second+=val-m[key].first;
        }
        m[key].first=val;
    }
    int sum(string prefix) {
         return m[prefix].first+m[prefix].second;
        //first=CurVal
        //second=total
    }
private:
    unordered_map<string, pair<int, int>> m;
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum obj = new MapSum();
 * obj.insert(key,val);
 * int param_2 = obj.sum(prefix);
 */
