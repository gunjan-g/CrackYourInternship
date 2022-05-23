class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL) return false;
        
        ListNode *fast=head, *slow=head;
        do{
            fast=fast->next;
            slow=slow->next;
            if(fast) fast=fast->next;
        }while(fast!=NULL && slow!=NULL && fast!=slow);
        if(fast!=NULL && fast==slow) return true;
        else return false;
    }
};
