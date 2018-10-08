class Solution {
public:
    string reverseStr(string s, int k) {
        int n=s.size();
        string res="";
        vector<char> temp;
        for(int i=0;i<n;i++){
            if((i/k)%2==0){//0k-1k 2k-3k
                temp.push_back(s[i]);
            }
            if((i/k)%2==1){
                while(!temp.empty()){
                    res+=temp.back();
                    temp.pop_back();
                }
                res+=s[i];
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
