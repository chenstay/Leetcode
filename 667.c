class Solution {
public:
    vector<int> constructArray(int n, int k) {
        vector<int> res;
        if(k==1)for(int i=1;i<n+1;i++)res.push_back(i);
        for(int i=0;i<k/2;i++){
            res.push_back(n-i);
            res.push_back(i+1);
        }
        if(k%2==0){
            int j=k/2+1;
            while(res.size()!=n){
                res.push_back(j++);
            }
        }
        if(k%2==1&&k!=1){
            int l=n-k/2;
            while(res.size()!=n){
                res.push_back(l--);
            }
        }
        return res;
    }
};
