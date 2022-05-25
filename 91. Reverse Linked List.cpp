class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       ListNode *first, *p =head, *q = NULL, *r = NULL;
        while(p!=NULL){
            r=q;
            q=p;
            p=p->next;
            q->next=r;
        }
        first=q;
        return first;
    }
};
