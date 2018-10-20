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
    ListNode* middleNode(ListNode* head) {
        ListNode* result;
        int count=0;
        int sum=0;
        for(ListNode* x=head;x!=NULL;x=x->next){
            sum++;
        }
        cout<<sum<<endl;
        for(ListNode* x=head;x!=NULL;x=x->next){
            count++;
            if(count==sum/2+1)return x;
        }
        return result;
    }
};
