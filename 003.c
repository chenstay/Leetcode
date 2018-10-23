class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n==0)return 0;
        int sum=1; 
        vector<int> tmp;
        tmp.push_back(s[0]);
        for(int i=1;i<n;i++){
            vector <int>::iterator iElement = find(tmp.begin(),tmp.end(),s[i]);
            if(iElement==tmp.end()){//not in
                tmp.push_back(s[i]);
                int num=tmp.size();
                sum=max(sum,num);
            }
            else{//in //pop sth <=the positon(included)
                int position=distance(tmp.begin(),iElement);
                int count=0;
                while(count<=position){
                    tmp.erase(tmp.begin());
                    count++;
                }
                tmp.push_back(s[i]);
                int num=tmp.size();
                sum=max(sum,num);
            }
        }
        return sum;
    }
};
