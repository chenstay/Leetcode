/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode* cur=head;
        ListNode* a=new ListNode(-1);
        ListNode* acur=a;
        ListNode* b=new ListNode(-1);
        ListNode* bcur=b;
        while(cur){
            if(cur->val<x){acur->next=new ListNode(cur->val);acur=acur->next;}
            else{bcur->next=new ListNode(cur->val);bcur=bcur->next;}
            cur=cur->next;
        }
        acur->next=b->next;
        return a->next;
    }
};
