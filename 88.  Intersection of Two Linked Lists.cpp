class Solution {
public:
    int lenA(ListNode *a){
        int cnt=0;
        while(a!=NULL){
            cnt++;
            a=a->next;
        }
        return cnt;
    }
    
    int lenB(ListNode *b){
        int cnt=0;
        while(b!=NULL){
            cnt++;
            b=b->next;
        }
        return cnt;
    }
    
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lena= lenA(headA);
        int lenb= lenB(headB);
        int len;
        
        if(lena>lenb){
            len=lena-lenb;
            for(int i=0;i<len;i++){
                headA=headA->next;
            }
        }else{
            len=lenb-lena;
            for(int i=0;i<len;i++){
                headB=headB->next;
            }
        }
        while(headA!=NULL && headB!=NULL && headA!=headB){
            headA=headA->next;
            headB=headB->next;
        }
        if(headA!=NULL && headB!=NULL) return headA;
        else return NULL;
    }
};
