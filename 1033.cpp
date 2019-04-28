class Solution {
public:
    vector<int> numMovesStones(int a, int b, int c) {
        vector<int> tmp;
        tmp.push_back(a);
        tmp.push_back(b);
        tmp.push_back(c);
        sort(tmp.begin(),tmp.end());
        a=tmp[0];
        b=tmp[1];
        c=tmp[2];
        if(a==b-1){
            if(c==b+1)return {{0,0}};
            else return {{1,c-b-1}};
        }
        else if(c==b+1){
            return {{1,b-a-1}};
        }
        else if(a==b-2||c==b+2)return {{1,c-a-2}};
        else return {{2,c-a-2}};
    }
};
