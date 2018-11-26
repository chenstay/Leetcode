class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(!head)return true;
        stack<int> tmp;
        ListNode* slow=head;
        ListNode* fast=head;
        tmp.push(head->val);
        while(fast->next&&fast->next->next){
            slow=slow->next;
            tmp.push(slow->val);
            fast=fast->next->next;
        }
        if(!fast->next)tmp.pop();//如果是奇数列，需要弹出中点
        while(slow->next){
            slow=slow->next;
            int num=tmp.top();
            tmp.pop();
            if(slow->val!=num)return false;
        }
        return true;
    }
};
