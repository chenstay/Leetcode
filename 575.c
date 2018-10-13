class Solution {
public:
    int distributeCandies(vector<int>& candies) {
        map<int,int> map;//<candies,numbers>
        int n=candies.size();
        for(int i=0;i<n;i++){
            map[candies[i]]++;
        }
        int type_size=map.size();
        if(type_size>=n/2)return n/2;
        else return type_size;
    }
};
