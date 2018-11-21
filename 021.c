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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {;
        ListNode* res=new ListNode(-1);
        ListNode* cur=res;
        while(l1&&l2){
            if(l1->val>l2->val){
                cur->next=l2;
                l2=l2->next;
            }
            else{
                cur->next=l1;
                l1=l1->next;
            }
            cur=cur->next;
        }
        cur->next=l1?l1:l2;
        return res->next;
    }
};

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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {;
        while(!l1)return l2;
        while(!l2)return l1;
        if(l1->val>l2->val){
            l2->next=mergeTwoLists(l1,l2->next);
            return l2;
        }
        else {
            l1->next=mergeTwoLists(l1->next,l2);
            return l1;
        }
    }
};
