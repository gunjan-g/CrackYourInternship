class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *q=head, *p=NULL;
        if(q!=NULL) p=head->next;
        while(p!=NULL){
            if(p->val==q->val){
                q->next=p->next;
                p=q->next;
            }
            else{
                p=p->next;
                q=q->next;
            }
        }
        return head;
    }
};
