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
    ListNode* swapPairs(ListNode* head) {
        if(!head||!head->next)return head;
        ListNode* tmp=head;
        //initial
        ListNode* res=new ListNode(tmp->next->val);
        ListNode* cur=res;
        cur->next=new ListNode(tmp->val);
        cur=cur->next;
        tmp=tmp->next;
        //reverse number
        while(tmp&&tmp->next&&tmp->next->next){
            cur->next=new ListNode(tmp->next->next->val);
            cur=cur->next;
            cur->next=new ListNode(tmp->next->val);
            cur=cur->next;
            tmp=tmp->next->next;
        }
        //the last odd one
        if(tmp->next)cur->next=new ListNode(tmp->next->val);
        return res;
    }
};

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head||!head->next)return head;
        ListNode* next=head->next;
        head->next=swapPairs(next->next);
        next->next=head;
        return next;
    }
};
