class Solution {
public:
    int shortestSubarray(vector<int>& A, int K) {
        //3Sum?
        int N = A.size(), res = N + 1;
        vector<int> B(N + 1, 0);
        for (int i = 0; i < N; i++) B[i + 1] = B[i] + A[i];
        deque<int> d;
        for (int i = 0; i < N + 1; i++) {
            while (d.size() > 0 && B[i] - B[d.front()] >= K)
                res = min(res, i - d.front()), d.pop_front();
            while (d.size() > 0 && B[i] <= B[d.back()]) d.pop_back();
            d.push_back(i);
        }
        return res <= N ? res : -1;
    }
};
//from reference
//need learn again
