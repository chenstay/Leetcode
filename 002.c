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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode *result = new ListNode(0);
        ListNode *tmp = result;
        int sum = 0;
        while(l1 || l2){      
            if(l1){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2){
                sum += l2->val;
                l2 = l2->next;
            }
            tmp->next = new ListNode(sum%10);
            sum /= 10;
            tmp = tmp->next;
        }
        if(sum)
            tmp->next = new ListNode(1);
        return result->next;//result:0->7->0->8
    }
};
