class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int> > res;
        permuteDFS(nums, 0, res);
        return res;
    }
    void permuteDFS(vector<int> &num, int start, vector<vector<int> > &res) {
        if (start >= num.size()&&find(res.begin(),res.end(),num)==res.end()) {res.push_back(num);}
        for (int i = start; i < num.size(); ++i) {
            swap(num[start], num[i]);
            permuteDFS(num, start + 1, res);
            swap(num[start], num[i]);
        }
    }
};

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int> > res;
        permuteDFS(nums, 0, res);
        return vector<vector<int>> (res.begin(), res.end());
    }
    void permuteDFS(vector<int> &num, int start, set<vector<int> > &res) {
        if (start >= num.size()) {res.insert(num);}
        for (int i = start; i < num.size(); ++i) {
            swap(num[start], num[i]);
            permuteDFS(num, start + 1, res);
            swap(num[start], num[i]);
        }
    }
};

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        vector<int> tmp;
        vector<int> visited(nums.size(),0);
        permuteDFS(res,nums,tmp,0,visited);
        return res;
    }
    void permuteDFS(vector<vector<int>>& res,vector<int> &num,vector<int>& tmp,int index,vector<int>& visited){
        if(index>=num.size())res.push_back(tmp);
        for(int i=0;i<num.size();i++){//从0开始
            if(visited[i]==0){
                if(i>0&&num[i]==num[i-1]&&visited[i-1]==0)continue;//和前面的数相等且前面的数并未曾使用过
                visited[i]=1;
                tmp.push_back(num[i]);
                permuteDFS(res,num,tmp,index+1,visited);
                tmp.pop_back();
                visited[i]=0;
            }
        }
    }
};
