class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;
        if (target < matrix[0][0] || target > matrix.back().back()) return false;
        int row=matrix.size();
        int col=matrix[0].size();
        int left=0;
        int right=row-1;
        while(left<=right){
            int mid=(right+left)/2;
            if(target<matrix[mid][0])right=mid-1;
            else if(target>matrix[mid][0])left=mid+1;
            else return true;
        }
        int l=0;
        int r=col-1;
        while(l<=r){
            int mid=(r+l)/2;
            if(target<matrix[right][mid])r=mid-1;
            else if(target>matrix[right][mid])l=mid+1;
            else return true;
        }
        return false;
    }
};
