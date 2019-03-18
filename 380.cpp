class RandomizedSet {
public:
    /** Initialize your data structure here. */
    RandomizedSet() {
        
    }
    
    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
    bool insert(int val) {
        if(m.count(val))return false;//have found
        num.push_back(val);
        m[val]=num.size()-1;
        return true;
    }
    
    /** Removes a value from the set. Returns true if the set contained the specified element. */
    bool remove(int val) {
        if(!m.count(val))return false;//not found
        //copy the position of last to the position of val
        int last=num.back();
        m[last]=m[val];
        //copy last value in the position of val
        num[m[val]]=last;
        //remove num and m
        num.pop_back();
        m.erase(val);
        return true;
    }
    
    /** Get a random element from the set. */
    int getRandom() {
        return num[rand()%num.size()];
    }
private:
    //num[position]=i;
    //m[i]=position;
    vector<int> num;
    unordered_map<int,int> m;
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet obj = new RandomizedSet();
 * bool param_1 = obj.insert(val);
 * bool param_2 = obj.remove(val);
 * int param_3 = obj.getRandom();
 */
