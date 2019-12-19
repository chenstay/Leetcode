class Solution {
public:
    int kthGrammar(int N, int K) {
        if(N==1&&K==1)return 0;
        int tmp=kthGrammar(N-1,(K+1)/2);
        if(K%2==1)return tmp;
        else return 1-tmp;
    }
};
