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
    vector<Interval> insert(vector<Interval>& intervals, Interval newInterval) {
        int i=0;
        int n=intervals.size();
        vector<Interval> res;
        while(i<n&&intervals[i].end<newInterval.start)res.push_back(intervals[i++]);
        while(i<n&&intervals[i].start<=newInterval.end){
            newInterval.start=min(intervals[i].start,newInterval.start);
            newInterval.end=max(intervals[i].end,newInterval.end);
            i++;
        }
        res.push_back(newInterval);
        while(i<n&&intervals[i].start>newInterval.end)res.push_back(intervals[i++]);
        return res;
    }
};
