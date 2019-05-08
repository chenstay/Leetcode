class Solution {
public:
    string removeDuplicateLetters(string s) {
        int m[256]={0},visited[256]={0};
        for(auto a:s){
            m[a]++;
        }
        string res="0";
        for(auto a:s){
            m[a]--;
            if(visited[a])continue;//
            while(m[res.back()]&&a<res.back()){
                visited[res.back()]=0;
                res.pop_back();
            }
            visited[a]=1;
            res+=a;
        }
        return res.substr(1);
    }
};
