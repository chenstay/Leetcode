class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int n1=name.size();
        int n2=typed.size();
        vector<int> temp1;
        vector<int> temp2;
        int sum=1;
        for(int i=0;i<n1-1;i++){
            if(name[i]==name[i+1])sum++;
            else{
                temp1.push_back(sum);
                sum=1;
            }
        }
        sum=1;
        for(int i=0;i<n2-1;i++){
            if(typed[i]==typed[i+1])sum++;
            else{
                temp2.push_back(sum);
                sum=1;
            }
        }
        if(temp1.size()!=temp2.size())return false;
        for(int i=0;i<temp1.size();i++){
            if(temp1[i]>temp2[i])return false;
        }
        return true;
        
    }
};
