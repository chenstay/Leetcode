class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty()) return 0;
        int res = 0;
        vector<int> height(matrix[0].size(),0);
        for (int i = 0; i < matrix.size(); ++i) {
            for (int j = 0; j < matrix[i].size(); ++j) {
                height[j] = matrix[i][j] == '0' ? 0 : (1 + height[j]);
            }
            res = max(res, largestRectangleArea(height));
        }
        return res;
    }
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
