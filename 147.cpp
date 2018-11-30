class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        if(!head)return NULL;
        ListNode* next=insertionSortList(head->next);
        ListNode* tmp=new ListNode(head->val);
        if(!next)return tmp;
        if(next->val>=head->val){//插入头节点
            tmp->next=next;
            return tmp;
        }
        else{
            ListNode* cur=next;
            ListNode* last=cur;
            while(cur->next&&cur->val<head->val){
                last=cur;
                cur=cur->next;
            }
            if(cur->val<head->val){//插入尾节点
                cur->next=tmp;
                return next;
            }
            else{
                last->next=tmp;
                tmp->next=cur;
                return next;
            }
        }
        
    }
};
