/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
class Solution {
public:
    int maxDepth(Node* root) {
        int maxdepth=0;
        if(root==NULL)return 0;
        if(root!=NULL){
            for(auto child:root->children){
                maxdepth=max(maxdepth,maxDepth(child));
            }
        }
        return maxdepth+1;
    }
};
