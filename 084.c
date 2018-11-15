class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        int res=0;
        stack<int> tmp;
        heights.push_back(0);
        for(int i=0;i<n+1;i++){
            if(tmp.empty()||heights[i]>heights[tmp.top()])tmp.push(i);
            else{
                int cur=tmp.top();
                tmp.pop();
                res=max(res,heights[cur]*(tmp.empty()?i:(i-tmp.top()-1)));
                i--;
            }
        }
        return res;
    }
};
