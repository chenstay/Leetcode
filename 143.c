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
    void reorderList(ListNode* head) {
        if(!head||!head->next||!head->next->next)return;
        //find mid
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next&&fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* mid=slow->next;
        slow->next=NULL;//将head的后半部分置为空
        //reverse mid-right
        ListNode* cur=mid;
        ListNode* pre=NULL;
        while(cur){
            ListNode* next=cur->next;
            cur->next=pre;
            pre=cur;
            cur=next;
        }
        //insert right to the left
        while(head&&pre){
            ListNode* tmp=head->next;
            head->next=pre;
            pre=pre->next;
            head->next->next=tmp; 
            head=head->next->next;
        }
    }
};
