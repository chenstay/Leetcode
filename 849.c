class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        int n=seats.size();
        vector<int> res;
        for(int i=0;i<n;i++){
            if(seats[i]==1)res.push_back(i);
        }
        int n2=res.size();
        if(n2==1)return max(res[0],n-1-res[0]);
        int fin=(res[1]-res[0])/2;
        for(int i=1;i<n2-1;i++){
            if((res[i+1]-res[i])/2>fin)fin=(res[i+1]-res[i])/2;
        }
        return max(fin,max(res[0],n-1-res[n2-1]));
    }
};
