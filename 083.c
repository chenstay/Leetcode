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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head||!head->next)return head; 
        ListNode* res=new ListNode(1);
        ListNode* tmp=res;
        while(head&&head->next){
            if(head->val!=head->next->val){
                tmp->next=new ListNode(head->val);
                tmp=tmp->next;
                }
            head=head->next;
        }
        if(head)tmp->next=new ListNode(head->val);
        return res&&res->next?res->next:res;
    }
};
