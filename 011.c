class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int area=0;
        for(int i=0;i<n-1;i++){
            for(int j=i;j<n;j++){
                area=max(area,(j-i)*min(height[i],height[j]));
            }
        }
        return area;
    }
};
