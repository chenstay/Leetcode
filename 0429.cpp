/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> res;
        if(!root)return res;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> curLevel; 
            int size=q.size();
            for(int i=0;i<size;i++){
                Node* tmp=q.front();
                q.pop();
                curLevel.push_back(tmp->val);
                for(auto a:tmp->children){
                    q.push(a);
                }
            }
            res.push_back(curLevel);
        }
        return res;
    }
};
