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
    vector<Interval> merge(vector<Interval>& intervals) {
        int n=intervals.size();
        if(n<2)return intervals;
        sort(intervals.begin(), intervals.end(), [](Interval &a, Interval &b) {return a.start < b.start;});
        vector<Interval> res;
        Interval tmp=intervals[0];
        for(int i=1;i<n;i++){
            if(intervals[i].start>tmp.end){
                res.push_back(tmp);
                tmp=intervals[i];
            }
            else{
                tmp.start=min(tmp.start,intervals[i].start);
                tmp.end=max(tmp.end,intervals[i].end);
            }
        }
        res.push_back(tmp);
        return res;
    }
};
