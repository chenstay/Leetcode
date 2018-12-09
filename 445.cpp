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
        stack<int> a,b;
        while(l1){
            a.push(l1->val);
            l1=l1->next;
        }
        while(l2){
            b.push(l2->val);
            l2=l2->next;
        }
        int sum=0;
        ListNode* res=new ListNode(0);
        while(!a.empty()||!b.empty()){
            if(!a.empty()){sum+=a.top();a.pop();}
            if(!b.empty()){sum+=b.top();b.pop();}
            res->val=sum%10;
            sum/=10;
            ListNode* head=new ListNode(sum);
            head->next=res;
            res=head;
        }
        return res->val==0?res->next:res;
    }
};
