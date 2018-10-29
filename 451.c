class Solution {
public:
    string frequencySort(string s) {
        map<char,int> m;
        for(auto ss:s){
            m[ss]++;
        }
        
        vector<vector<char>> bucket(s.size()+1);
        for(auto mm:m){
            bucket[mm.second].push_back(mm.first);
        }
        
        string res="";
        for(int i=s.size();i>=0;i--){
            for(auto j:bucket[i]){
                res+=judge(i,j);
            }
        }
        return res;
        
    }
    string judge(int i,char j){
        string res="";
        for(int k=0;k<i;k++){
            res+=j;
        }
        return res;
    }
};
