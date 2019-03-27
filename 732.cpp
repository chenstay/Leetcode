class MyCalendarThree {
public:
    MyCalendarThree() {
        
    }
    
    int book(int start, int end) {
        ++nums[start];
        --nums[end];
        int cnt=0;
        int res=0;
        for(auto num:nums){
            cnt+=num.second;
            res=max(res,cnt);
        }
        return res;
    }
private:
    map<int,int> nums;
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */
 the same to 713.cpp
