class Solution {
public:
    string replaceWords(vector<string>& dict, string sentence) {
        map<string,int> m;
        for(auto word:dict){
            m[word]++;
        }
        istringstream istr(sentence);
        string tmp;
        string res;
        while(istr>>tmp){
            int n=tmp.size();
            bool judge=false;
            for(int i=1;i<=n;i++){
                //cout<<tmp.substr(0,i)<<endl;
                if(m.count(tmp.substr(0,i))){
                    res+=tmp.substr(0,i);
                    judge=true;
                    break;}
            }
            if(!judge)res+=tmp;
            res+=" ";
        }
        return res.substr(0,res.size()-1);
    }
};
