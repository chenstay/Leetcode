class MyCalendar {
public:
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for(auto a:cal){
            //if(start>=a.first&&start<a.second)return false;
            //if(end>=a.first&&end<a.second)return false;
            //if(a.first>=start&&a.first<end)return false;
            if (max(a.first, start) < min(a.second, end)) return false;
        }
        cal.push_back({start,end});
        return true;
    }
private:
    vector<pair<int,int>> cal;
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
class MyCalendar {
public:
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        auto it=cal.lower_bound(start);//it.first>=start
        if(it!=cal.end()&&it->first<end)return false;
        //prev(it).first<start
        if(it!=cal.begin()&&start<prev(it)->second)return false;
        return true;
    }
private:
    map<int,int> cal;
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
