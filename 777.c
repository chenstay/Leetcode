class Solution {
public:
    bool canTransform(string start, string end) {
        if(start.size()!=end.size())return false;
        if(judge(start)!=judge(end))return false;
        vector<int> Ltmp;
        vector<int> Rtmp;
        int k=0;
        int l=0;
        for(int i=0;i<start.size();i++){
            if(start[i]=='L')Ltmp.push_back(i);
            if(start[i]=='R')Rtmp.push_back(i);
        }
        for(int j=0;j<end.size();j++){
            if(end[j]=='L'){
                if(j>Ltmp[k++])return false;
            }
            if(end[j]=='R'){
                if(j<Rtmp[l++])return false;
            }
        }
        return true;
    }
    string judge(string example){
        string res="";
        for(auto &s:example){
            if(s=='R'||s=='L')res+=s;
        }
        return res;
    }
};
