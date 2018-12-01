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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head)return NULL;
        if(head&&!head->next&&n==1)return NULL;
        ListNode* fast=head;
        ListNode* slow=head;
        int length=1;
        for(int i=0;i<n;i++){
            if(fast->next){length++;fast=fast->next;}
        }

        while(fast&&fast->next){
            fast=fast->next;
            slow=slow->next;
            length++;
        }
        if(n==1)slow->next=NULL; //去除尾节点
        else if(n==length)return head->next; //去除头节点
        else { 
            ListNode* tmp=slow->next;
            slow->next=tmp->next;
            delete tmp;
        }
        return head;
    }
};
