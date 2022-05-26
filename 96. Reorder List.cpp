class Solution {
public:
    void reorderList(ListNode* head){
        if(!head || !(head->next) || !(head->next->next)) return;
        stack<ListNode *> st;
        int size=0;
        ListNode *p=head, *ptr=head;
        while(p!=NULL){
            st.push(p);
            size++;
            p=p->next;
        }
        
        for(int i=0;i<size/2;i++){
            ListNode *temp= st.top();
            st.pop();
            temp->next=ptr->next;
            ptr->next=temp;
            ptr=ptr->next->next;
        }
        ptr->next=NULL;
    }
};
