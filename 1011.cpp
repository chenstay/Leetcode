class Solution {
public:
    int shipWithinDays(vector<int>& weights, int D) {
        int right=0;
        int left=INT_MIN;
        for(auto weight:weights){
            right+=weight;
            left=max(left,weight);
        }
        while(left<right){
            int mid=left+(right-left)/2;
            int cnt=0;
            int sum=0;
            for(auto weight:weights){
                sum+=weight;
                if(sum>mid){sum=weight;cnt++;}
                else if(sum==mid){cnt++;sum=0;}
            }
            if(cnt<D)right=mid;
            else left=mid+1;
        }
        return right;
    }
};
