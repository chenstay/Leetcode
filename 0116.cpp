/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() {}

    Node(int _val, Node* _left, Node* _right, Node* _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};
*/
class Solution {
public:
    Node* connect(Node* root) {
        if(!root)return NULL;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            Node* r=q.front();
            if(r->left){
                r->left->next=r->right;
                q.push(r->left);
            }
            if(r->right){
                q.push(r->right);
            }
            q.pop();
            if(!q.empty())r->next=q.front();
        }
        Node* r=root;
        while(r){
            r->next=NULL;
            r=r->right;
        }
        return root;
    }
};
