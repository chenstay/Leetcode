class Solution {
public:
    int compress(vector<char>& chars) {
        int n=chars.size();
        if(n==0)return 0;
        if(n==1)return 1;
        int sum=1;
        int j=0;
        for(int i=0;i<n;i++){
            if(chars[i]==chars[i+1]&&i<n-1)sum++;
            if(chars[i]!=chars[i+1]||i==n-1){
                chars[j++]=chars[i];
                string tmp=to_string(sum);
                if(sum>1){
                    for(int k=0;k<tmp.size();k++){
                    chars[j++]=tmp[k];
                    }
                }
                sum=1;
            }
        }
        return j;
    }
};
