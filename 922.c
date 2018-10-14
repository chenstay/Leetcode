class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> odd;
        vector<int> even;
        for(auto &am:A){
            if(am%2==0)even.push_back(am);
            if(am%2==1)odd.push_back(am);
        }
        vector<int> res;
        int n=A.size();
        for(int i=0;i<n/2;i++){
            res.push_back(even[i]);
            res.push_back(odd[i]);
        }
        return res;
    }
};
