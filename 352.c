/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class SummaryRanges {
public:
    /** Initialize your data structure here. */
    SummaryRanges() {
        
    }
    
    void addNum(int val) {
        int n=v.size();int pos=0;
        Interval cur(val,val);
        vector<Interval> res;
        for(int i=0;i<n;i++){
            if(cur.start>v[i].end+1){res.push_back(v[i]);pos++;}
            else if(cur.end<v[i].start-1)res.push_back(v[i]);
            else {
                cur.start=min(cur.start,v[i].start);
                cur.end=max(cur.end,v[i].end);
            }
        }
        res.insert(res.begin()+pos,cur);
        v=res;
    }
    
    vector<Interval> getIntervals() {
        return v;
    }
private:
    vector<Interval> v;
};

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges obj = new SummaryRanges();
 * obj.addNum(val);
 * vector<Interval> param_2 = obj.getIntervals();
 */
