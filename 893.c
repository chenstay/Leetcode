class Solution {
public:
    int numSpecialEquivGroups(vector<string>& A) {
        int n=A.size();
        set <vector<set<char>>> a;
        for(int i=0;i<n;i++){
           a.insert(judge(A[i]));
        }
        return a.size();
    }
    vector<set<char>> judge(string s){
        int n=s.size();
        set<char> a;
        set<char> b;
        for(int i=0;i<n;i++){
            i%2==1?a.insert(s[i]):b.insert(s[i]);
        }
        vector<set<char>> res;
        res.push_back(a);
        res.push_back(b);
        return res; 
    }
};
