class Twitter {
public:
    /** Initialize your data structure here. */
    Twitter() {
        times=0;
    }
    
    /** Compose a new tweet. */
    void postTweet(int userId, int tweetId) {
        follow(userId,userId);
        tweets[userId].insert({times++,tweetId});
    }
    
    /** Retrieve the 10 most recent tweet ids in the user's news feed. Each item in the news feed must be posted by users who the user followed or by the user herself. Tweets must be ordered from most recent to least recent. */
    vector<int> getNewsFeed(int userId) {
        vector<int> res;
        map<int,int> m;
        for(auto fri:friends[userId]){
            for(auto tweet:tweets[fri]){
                m.insert({tweet.first,tweet.second});
                if(m.size()>10)m.erase(m.begin());
            }
        }
        for(auto mm:m){
            res.insert(res.begin(),mm.second);
        }
        return res;
    }
    
    /** Follower follows a followee. If the operation is invalid, it should be a no-op. */
    void follow(int followerId, int followeeId) {
        friends[followerId].insert(followeeId);
    }
    
    /** Follower unfollows a followee. If the operation is invalid, it should be a no-op. */
    void unfollow(int followerId, int followeeId) {
        if(followerId!=followeeId){
            friends[followerId].erase(followeeId);
        }
    }
private:
    int times;
    map<int,set<int>>friends;
    map<int,map<int,int>> tweets;
};
