class Tree{
public:
    Tree* child[26];
    bool isWord;
    Tree():isWord(false){
        for(auto &a:child)a=NULL;
    }
};
class WordDictionary {
public:
    /** Initialize your data structure here. */
    WordDictionary() {
        root=new Tree();
    }
    
    /** Adds a word into the data structure. */
    void addWord(string word) {
        Tree* p=root;
        for(auto &a:word){
            int i=a-'a';
            if(!p->child[i])p->child[i]=new Tree();
            p=p->child[i];
        }
        p->isWord=true;
    }
    
    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    bool search(string word) {
        return searchWord(word,root,0);
    }
    bool searchWord(string word,Tree* p,int i){
        if(i==word.size())return p->isWord;
        if(word[i]=='.'){
            for(auto &a:p->child)if(a&&searchWord(word,a,i+1))return true;
            return false;
        }
        else{
            return p->child[word[i]-'a']&&searchWord(word,p->child[word[i]-'a'],i+1);
        }
    }
private:
    Tree* root;
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary obj = new WordDictionary();
 * obj.addWord(word);
 * bool param_2 = obj.search(word);
 */
