class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> m;
        for(auto arr:arr1)m[arr]++;
        vector<int> res;
        for(int i=0;i<arr2.size();i++){
            for(int j=0;j<m[arr2[i]];j++){
                res.push_back(arr2[i]);
            }
            m[arr2[i]]=0;
        }
        for(auto mm:m){
            if(mm.second!=0){
                for(int i=0;i<mm.second;i++)res.push_back(mm.first);
            }
        }
        return res;
    }
};
