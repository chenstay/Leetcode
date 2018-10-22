class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> res;
        for(int i=1;i<=numRows;i++){
            res.push_back(judge(i));
        }
        return res;
    }
    vector<int> judge(int i){
        vector<int>tmp;
        tmp.push_back(1);
        if(i==1)return tmp;
        if(i==2){tmp.push_back(1);return tmp;}
        vector<int> my=judge(i-1);
        int n=my.size();
        for(int i=1;i<n;i++){
            tmp.push_back(my[i-1]+my[i]);
        }
        tmp.push_back(1);
        return tmp;
    }
};
