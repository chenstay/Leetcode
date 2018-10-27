class Solution {
public:
    vector<vector<int>> palindromePairs(vector<string>& words) {
        vector<vector<int>> res;
        vector<int> tmp;
        int n=words.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j){continue;}
                if(judge(words[i],words[j])){
                    cout<<i<<j<<endl;
                    tmp.push_back(i);
                    tmp.push_back(j);
                    res.push_back(tmp);
                    tmp.clear();
                }
            }
        }
        return res;
    }
    bool judge(string a,string b){
        string res=a+b;
        int n=res.size();
        int left=0;
        int right=n-1;
        while(left<right){
            if(res[left]!=res[right])return false;
            else{
                left++;
                right--;
            }
        }
        return true;
    }
};
//time exceed in the above solution

//solution2
class Solution {
public:
    vector<vector<int>> palindromePairs(vector<string>& words) {
        vector<vector<int>> res;
        map<string,int> m;
        string tmp;
        int n=words.size();
        for(int i=0;i<n;i++){
            tmp=words[i];
            reverse(tmp.begin(),tmp.end());
            m[tmp]=i;
        }
        string left;
        string right;
        for(int i=0;i<n;i++){
            for(int j=0;j<words[i].size();j++){
                left=words[i].substr(0,j);
                right=words[i].substr(j);
                if(m.find(left)!=m.end()&&m[left]!=i&&judge(right)){
                    res.push_back({i,m[left]});
                    if(left.empty()){
                        res.push_back({m[left],i});
                    }
                }
                if(m.find(right)!=m.end()&&m[right]!=i&&judge(left)){
                    res.push_back({m[right],i});
                }
            }
        }
        return res;
    }
    bool judge(string res){
        int n=res.size();
        int left=0;
        int right=n-1;
        while(left<right){
            if(res[left]!=res[right])return false;
            else{
                left++;
                right--;
            }
        }
        return true;
    }
};
