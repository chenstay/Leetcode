class Solution {
public:
    string complexNumberMultiply(string a, string b) {
        int a1=atoi(a.substr(0,a.find('+')).c_str());
        int b1=atoi(b.substr(0,b.find('+')).c_str());
        int a2=atoi(a.substr(a.find('+')+1,a.size()-a.find('+')-2).c_str());
        int b2=atoi(b.substr(b.find('+')+1,b.size()-b.find('+')-2).c_str());
        return to_string(a1*b1+a2*b2*(-1))+"+"+to_string(a1*b2+a2*b1)+"i";
    }
};
