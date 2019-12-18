class MyHashSet {
public:
    /** Initialize your data structure here. */
    MyHashSet() {
        data.resize(1000000, -1);
    }
    
    void add(int key) {
        data[key] = 1;
    }
    
    void remove(int key) {
        data[key] = -1;
    }
    
    /** Returns true if this set contains the specified element */
    bool contains(int key) {
        return data[key]==1;
    }
private:
    vector<int> data;
};
