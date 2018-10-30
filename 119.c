class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex==0)return {1};
        if(rowIndex==1)return {1,1};
        vector<int> tmp=getRow(rowIndex-1);
        vector<int> res;
        res.push_back(1);
        for(int i=0;i<tmp.size()-1;i++){
            res.push_back(tmp[i]+tmp[i+1]);
        }
        res.push_back(1);
        return res;
    }
};
