class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *p, *q= head;
        if(q==NULL) return head;    //if null, then return 
        p=head->next;
        while(p!=NULL){
            if(p->val==val){
                q->next=p->next;
                delete p;
                p=q->next;
            }
            else{
                q=p;
                p=p->next;
            }
        }
        //if head has that value delete after deleting all other nodes
        if(head->val==val){
            head=head->next;
        }
        return head;
    }
};
