class Solution {
public:
    string longestWord(vector<string>& words) {
        sort(words.begin(),words.end());
        unordered_set<string> tmp(words.begin(),words.end());
        string res="";
        int maxLen=0;
        queue<string> q;
        for(auto word:words)if(word.size()==1)q.push(word);
        while(!q.empty()){
            string t=q.front();
            q.pop();
            if(t.size()>maxLen){
                maxLen=t.size();
                res=t;
            }
            for(char i='a';i<='z';i++){
                t.push_back(i);
                if(tmp.count(t))q.push(t);
                t.pop_back();
            }
        }
        return res;
    }
};

class Solution {
public:
    string longestWord(vector<string>& words) {
        sort(words.begin(),words.end());
        string res="";
        unordered_set<string> s;
        for(auto word:words){
            if(word.size()==1||s.count(word.substr(0,word.size()-1))){
                if(word.size()>res.size())res=word;
                s.insert(word);
            }
        }
        return res;
    }
};
