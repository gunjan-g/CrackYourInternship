class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *p=head, *q=head;
        //keep in mind that if there are two middle nodes, we've to return the 2nd one
        
        while(q!=NULL && q->next!=NULL){
            p=p->next;
            q=q->next->next;
        }
        return p;
    }
};
