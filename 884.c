class Solution {
public:
    vector<string> uncommonFromSentences(string A, string B) {
        map<string,int> map;
        //int n1=A.size();
        string temp="";
        for(int i=0;i<A.size();i++){
            if(A[i]>='a'&&A[i]<='z')temp+=A[i];
            if(A[i]==' '||i==A.size()-1){map[temp]++;temp.clear();}
        }
        for(int i=0;i<B.size();i++){
            if(B[i]>='a'&&B[i]<='z')temp+=B[i];
            if(B[i]==' '||i==B.size()-1){map[temp]++;temp.clear();}
        }
        vector<string> res;
        for(auto m:map){
            if(m.second==1)res.push_back(m.first);
        }
        return res;
    }
};
