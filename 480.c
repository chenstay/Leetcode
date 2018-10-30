class Solution {
public:
    vector<double> medianSlidingWindow(vector<int>& nums, int k) {
        multiset<int> window(nums.begin(),nums.begin()+k);
        vector<double> res;
        auto mid=next(window.begin(),k/2);
        for(int i=k;i<=nums.size();i++){
            res.push_back((double(*mid)+*prev(mid,1-k%2))/2);
            if(i==nums.size())break;
            //insert 
            window.insert(nums[i]);
            //review mid
            if(nums[i]<*mid)mid--;
            if(nums[i-k]<=*mid)mid++;
            //erase
            window.erase(window.lower_bound(nums[i - k]));
        }
        return res;
    }
};
