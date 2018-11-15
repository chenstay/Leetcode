class Solution {
public:
    int trap(vector<int>& height) {
        int i=0;
        int n=height.size();
        stack<int> tmp;
        int res=0;
        while(i<n){
            if(tmp.empty()||height[i]<height[tmp.top()])tmp.push(i++);
            else{
                int bottom=tmp.top();
                tmp.pop();
                if(tmp.empty())continue;
                res+=(min(height[i],height[tmp.top()])-height[bottom])*(i-tmp.top()-1);
            }
        }
        return res;
    }
};
