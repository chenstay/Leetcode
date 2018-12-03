class Solution {
public:
    string largestTimeFromDigits(vector<int>& A) {
        string res="";
        sort(A.begin(),A.end());
        int tmp=INT_MIN;
        do{
            int hour=A[0]*10+A[1];
            int minute=A[2]*10+A[3];
            if(hour>23||minute>59)continue;
            if(hour*60+minute>tmp){
                tmp=hour*60+minute;
                res=to_string(A[0])+to_string(A[1])+":"+to_string(A[2])+to_string(A[3]);
            }
        }
        while(next_permutation(A.begin(),A.end()));
        return res;
    }
};
