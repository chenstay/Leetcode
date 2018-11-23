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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head)return head;
        ListNode* pre=new ListNode(-1);
        ListNode* tmp=pre;
        pre->next=head;
        while(tmp->next){
            if(tmp->next->val==val){
                ListNode* cur=tmp->next;
                tmp->next=tmp->next->next;
                delete cur;
            }
            else tmp=tmp->next;
        }
        return pre->next;
    }
};
