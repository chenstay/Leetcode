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
    ListNode* reverseList(ListNode* head) {
        ListNode* pre=NULL;//带头结点的单链表
        while(head)
        {
            ListNode* next = head->next;
            head->next=pre;
            pre=head;
            head=next;
        }
        return pre;
    }
};
//迭代法
//https://blog.csdn.net/qq_17550379/article/details/80647926?utm_source=blogkpcl5
