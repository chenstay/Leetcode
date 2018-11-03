class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> word(wordList.begin(),wordList.end());
        //word.insert(endWord);
        queue<string> toVisit;
        addNextWords(beginWord, word, toVisit);
        int dist = 2;
        while (!toVisit.empty()) {
            int num=toVisit.size();
            for(int i=0;i<num;i++){
                string fro=toVisit.front();
                //cout<<i<<" "<<fro<<endl;
                toVisit.pop();
                if(fro==endWord)return dist;
                addNextWords(fro, word, toVisit);
            }
            dist++;
        }
        return 0;
    }
private:
    void addNextWords(string word, unordered_set<string>& wordList, queue<string>& toVisit){
        wordList.erase(word);
        for(int i=0;i<word.size();i++){
            string co=word;
            for(char j='a';j<='z';j++){
                co[i]=j;
                if(wordList.find(co)!=wordList.end()){
                    toVisit.push(co);
                    wordList.erase(co);
                }
            }
        }
    }
};

