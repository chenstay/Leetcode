class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if ( k==0 )
            return;
        if (k > n)
            k = k % n;
        vector<int> rest(k);
        for(int i=n-k;i<n;i++){
            rest[i-(n-k)]=nums[i];
        }
        for(int i=n-k-1;i>=0;i--){
            nums[i+k]=nums[i];
        }
        for(int i=0;i<k;i++){
            nums[i]=rest[i];
        }
    }
};
