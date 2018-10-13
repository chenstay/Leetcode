class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        map<string,int> map;
        vector<string> res;
        int count=0;
        for(auto &str:cpdomains){
            int idx = str.find(' ');
            int count = std::stoi(str.substr(0, idx));
            for(int i=str.size()-1;i>=0;i--){
                if(str[i]=='.'){
                    string temp=str.substr(i+1);
                    map[temp]+=count;temp='.'+temp;
                }
                if(str[i]==' '){
                    string temp=str.substr(i+1);
                    map[temp]+=count;temp.clear();
                }
            }
        }
        for(auto submap:map){
            res.push_back(to_string(submap.second)+' '+submap.first);
        }
        return res;
    }
};
//find function
// *substr function
//stoi function:convert string to int
//map.second/first function "."not"->"
//map[]not()
