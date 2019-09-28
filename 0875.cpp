class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int H) {
        //sum[piles[i]/result]<=H for i=0..n
        int n=piles.size();
        int left=1;
        int right=INT_MIN;
        for(auto pile:piles)right=max(right,pile);
        while(left<right){
            int mid=left+(right-left)/2;
            int cnt=0;
            for(auto pile:piles){
                cnt+=pile%mid==0?pile/mid:pile/mid+1;
            }
            if(cnt>H)left=mid+1;
            else right=mid;
        }
        return right;
    }
};
