class Solution {
public:
    string getHint(string secret, string guess) {
        int m[10]={0};
        int a=0;int b=0;
        for(int i=0;i<secret.size();i++){
            if(secret[i]==guess[i])a++;
            else m[secret[i]-'0']++;
        }
        for(int i=0;i<secret.size();i++){
            if(guess[i]!=secret[i]&&m[guess[i]-'0']){
                b++;
                m[guess[i]-'0']--;
            }
        }
        return to_string(a)+'A'+to_string(b)+'B';
    }
};
