/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
public:
    vector<int> findRightInterval(vector<Interval>& intervals) {
        map<int,int> m;
        int n=intervals.size();
        vector<int> res;
        for(int i=0;i<n;i++){
            m[intervals[i].start]=i;
        }
        for(auto interval:intervals){
            auto it=m.lower_bound(interval.end);
            if(it==m.end())res.push_back(-1);
            else res.push_back(it->second);
        }
        return res;
    }
};
