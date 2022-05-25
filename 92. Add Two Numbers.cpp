class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l3;
        int c=0,x;
        if(l1!=NULL && l2!=NULL){
            x=(l1->val)+(l2->val)+c;
            l3= new ListNode(x%10);
            l3->next=NULL;
            if(x>9) c=1;
            l1=l1->next;
            l2=l2->next;
        }
        ListNode *p=l3;
        while(l1!=NULL && l2!=NULL){
            x=(l1->val)+(l2->val)+c;
            ListNode* temp= new ListNode(x%10,NULL);
            if(x>9) c=1;
            else c=0;
            l1=l1->next;
            l2=l2->next;
            p->next=temp;
            p=temp;
        }
        while(l1!=NULL){
            x=(l1->val)+c;
            ListNode* temp= new ListNode(x%10,NULL);
            if(x>9) c=1;
            else c=0;
            l1=l1->next;
            p->next=temp;
            p=temp;
        }
        while(l2!=NULL){
            x=(l2->val)+c;
            ListNode* temp= new ListNode(x%10,NULL);
            if(x>9) c=1;
            else c=0;
            l2=l2->next;
            p->next=temp;
            p=temp;
        }
        if(c==1){
            ListNode* temp= new ListNode(1,NULL);
            p->next=temp;
            p=temp;
        }
        return l3;
    }
};
