#include <map>
class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        string res;
        
        map<char,int> mymap;
        for(int i=0;i<licensePlate.size();i++){
            if((licensePlate[i]>='a'&&licensePlate[i]<='z')||(licensePlate[i]>='A'&&licensePlate[i]<='Z'))mymap[tolower(licensePlate[i])]++;
        }
        
        for(int j=0;j<words.size();j++){
            if(judge(words[j],mymap)==true&&(words[j].size()<res.size()||res.empty())){res=words[j];}
        }
        return res;
    }
    bool judge(string word,map<char,int> mymap){
        bool a=true;
        map<char,int> word_map;
        for(int i=0;i<word.size();i++){
            if((word[i]>='a'&&word[i]<='z')||(word[i]>='A'&&word[i]<='Z'))word_map[tolower(word[i])]++;
        }
        for(auto m:mymap){
            if(m.second>word_map[m.first])a=false;
        }
        return a;
    }
};
