class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(int i=0;i<asteroids.size();i++){
            if(st.empty()||asteroids[i]>0)st.push(asteroids[i]);
            else if(asteroids[i]<0){
                if(st.top()==-asteroids[i])st.pop();
                else if(st.top()<0)st.push(asteroids[i]);
                else if(st.top()<-asteroids[i]&&st.top()>asteroids[i]){st.pop();i--;}
                else if(st.top()>-asteroids[i])continue;
            }
        }
        vector<int> res;
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
