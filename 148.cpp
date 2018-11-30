class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(!head||!head->next)return head;
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* pre=head;
        while(fast&&fast->next){
            pre=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        pre->next=NULL;
        return merge(sortList(head),sortList(slow));//slow 后半边 head 前半边
    }
    ListNode* merge(ListNode* l1, ListNode* l2) {
        while(!l1)return l2;
        while(!l2)return l1;
        if(l1->val>l2->val){
            l2->next=merge(l1,l2->next);
            return l2;
        }
        else {
            l1->next=merge(l1->next,l2);
            return l1;
        }
    }
};
