class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        int n=paragraph.size();
        set<string> banned_words;
        for (string &b : banned) {
            banned_words.insert(b);
        }
        //string banned_words;
        //banned_words = accumulate(banned.begin(), banned.end(), banned_words);
        string temp="";
        map<string,int> hash;
        for(int i=0;i<n;i++)paragraph[i]=tolower(paragraph[i]);
        for(int i=0;i<n;i++){
            if((paragraph[i]>='a'&&paragraph[i]<='z')||(paragraph[i]>='A'&&paragraph[i]<='Z'))temp+=paragraph[i];
            else{
                if(!temp.empty()&&banned_words.count(temp)==0){hash[temp]++;}
                temp.clear();
            }
            if(i==n-1){
                if(!temp.empty()&&banned_words.count(temp)==0){hash[temp]++;}
                temp.clear();
            }
        }
        int cnt=0;
        string res="";
        for(auto it=hash.begin();it!=hash.end();++it){
            if(it->second>cnt){
                cnt=it->second;
                res=it->first;
            }
        }
        return res;
    }
};
