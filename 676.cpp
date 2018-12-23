class MagicDictionary {
public:
    /** Initialize your data structure here. */
    MagicDictionary() {
        
    }
    
    /** Build a dictionary through a list of words */
    void buildDict(vector<string> dict) {
        for(auto word:dict)s.insert(word);
    }
    
    /** Returns if there is any word in the trie that equals to the given word after modifying exactly one character */
    bool search(string word) {
        for(int i=0;i<word.size();i++){
            char tmp=word[i];
            for(char j='a';j<='z';j++){
                if(j==tmp)continue;
                word[i]=j;
                if(s.count(word))return true;
            }
            word[i]=tmp;
        }
        return false;
    }
private:
    unordered_set<string> s;
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary obj = new MagicDictionary();
 * obj.buildDict(dict);
 * bool param_2 = obj.search(word);
 */
