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
        ListNode* dummy=new ListNode(-1);
        ListNode* pre=dummy;
        dummy->next=head;
        while(pre->next){
            ListNode* cur=pre->next;
            while(cur->next&&cur->val==cur->next->val){
                ListNode* tmp=cur;
                cur=cur->next;
                delete tmp;
                }
            if(cur!=pre->next)pre->next=cur->next;//duplicate
            else pre=pre->next;
        }
        return dummy->next;
    }
};
//way 2
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
        if(!head)return head;
        if(head->next&&head->val==head->next->val){
            while(head->next&&head->val==head->next->val)head=head->next;
            return deleteDuplicates(head->next);
        }
        head->next=deleteDuplicates(head->next);
        return head;
    }
};
