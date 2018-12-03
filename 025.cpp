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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(!head)return NULL;
        if(k==1)return head;
        int length=1;
        ListNode* tmp=head;
        while(tmp->next&&length!=k){
            length++;
            tmp=tmp->next;
        }
        //initial length<k, no need to change
        if(length!=k)return head;
        //
        ListNode* half=reverseKGroup(tmp->next,k);
        tmp->next=NULL;
        //reverse 1-k,k>1
        ListNode* pre=NULL;
        ListNode* cur=head;
        while(cur){
            ListNode* next=cur->next;
            cur->next=pre;
            pre=cur;
            cur=next;
        }
        tmp=pre;
        while(tmp&&tmp->next)tmp=tmp->next;
        tmp->next=half;
        return pre;
    }
};
