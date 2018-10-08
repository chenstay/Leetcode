class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        vector<char> temp;
        string res="";
        for(int i=0;i<n;i++){
            if(s[i]!=' ')temp.push_back(s[i]);
            else if(s[i]==' '){
                while(!temp.empty()){
                    res+=temp.back();
                    temp.pop_back();
                }
                res+=' ';
            }
            if(i==n-1){
                while(!temp.empty()){
                    res+=temp.back();
                    temp.pop_back();
                }
            }
        }
        return res;
    }
};
