class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int mi=INT_MAX;
        vector<vector<int>> res;
        for(int i=0;i<arr.size()-1;i++){
            if((arr[i+1]-arr[i])<mi){
                mi=arr[i+1]-arr[i];
                res.clear();
                res.push_back({arr[i],arr[i+1]});
            }
            else if((arr[i+1]-arr[i])==mi)res.push_back({arr[i],arr[i+1]});
        }
        return res;
    }
};
