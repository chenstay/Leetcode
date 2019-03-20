class Solution {
public:
    bool rotateString(string A, string B) {
        int n1=A.size();
        int n2=B.size();
        if(n1!=n2)return false;
        if(A==B)return true;
        for(int i=1;i<n1;i++){
            if((A.substr(i)+A.substr(0,i))==B)return true;
        }
        return false;
    }
};
//way 2
class Solution {
public:
    bool rotateString(string A, string B) {
        return A.size()==B.size()&&(A+A).find(B)!=string::npos;
    }
};
