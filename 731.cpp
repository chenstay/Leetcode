class MyCalendarTwo {
public:
    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {
        for(auto a:s2)if(start>=a.second||end<=a.first)continue;
        else return false;
        for(auto a:s1)if(start>=a.second||end<=a.first)continue;
        else s2.insert({max(a.first,start),min(a.second,end)});
        s1.insert({start,end});
        return true;
    }
private:
    set<pair<int,int>> s1,s2;
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */
class MyCalendarTwo {
public:
    MyCalendarTwo() {
        
    }
    
    bool book(int start, int end) {
        ++nums[start];
        --nums[end];
        int cnt=0;
        for(auto num:nums){
            cnt+=num.second;
            if(cnt==3){
                --nums[start];
                ++nums[end];
                return false;
            }
        }
        return true;
    }
private:
    map<int,int> nums;
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */
