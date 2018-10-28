class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        int n=emails.size();
        map<string,int> m;
        for(int k=0;k<n;k++){
            string email=emails[k];
            int i=0;
            string tmp;
            while(email[i]!='+'&&email[i]!='@'){
                if(email[i]=='.'){i++;continue;}
                tmp+=email[i++];
            }//i=location of +
            while(email[i]!='@'){i++;}//i=location of @
            tmp+='@';
            for(int j=i+1;j<email.size();j++)tmp+=email[j];
            //cout<<tmp<<endl;
            m[tmp]++;
        }
        return m.size(); 
    }
};
