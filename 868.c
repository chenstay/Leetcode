class Solution {
public:
    int binaryGap(int N) {
        vector<int> binary;
        while(N!=0){
            binary.push_back(N%2);
            N=N/2;
        }
        vector <int>::iterator iElement = find(binary.begin(),binary.end(),1);
        int curPos=distance(binary.begin(),iElement);
        int distance=0;
        //cout<<binary.size()<<endl;
        for(int i=curPos+1;i<binary.size();i++){
            if(binary[i]==1){
                distance=max(distance,i-curPos);
                curPos=i;
            }
        }
        return distance;
    }
};
