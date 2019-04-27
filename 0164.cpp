class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.empty())return 0;
        int mx=INT_MIN,mn=INT_MAX,n=nums.size();
        for(auto num:nums){
            mx=max(mx,num);
            mn=min(mn,num);
        }
        int size=(mx-mn)/n+1;//桶容量
        int bucket=(mx-mn)/size+1;//桶个数
        vector<int> bucketMAX(bucket,INT_MIN);
        vector<int> bucketMIN(bucket,INT_MAX);
        set<int> s;//存放桶id
        for(auto num:nums){
            int i=(num-mn)/size;//桶id
            bucketMIN[i]=min(num,bucketMIN[i]);
            bucketMAX[i]=max(bucketMAX[i],num);
            s.insert(i);
        }
        int pre=0,res=0;
        for(int i=1;i<n;i++){
            if(!s.count(i))continue;
            res=max(res,bucketMIN[i]-bucketMAX[pre]);
            pre=i;
        }
        return res;
    }
};
