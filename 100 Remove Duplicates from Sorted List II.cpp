class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        unordered_map<int,int> m;
        ListNode *forward= head, *backward=NULL, *temp=head;
        while(temp!=NULL){
            m[temp->val]++;
            temp=temp->next;
        }
        
        while(forward!=NULL){
            if(forward==head && m[forward->val]>1){
                head=head->next;
                forward=head;
            }
            else if(forward!=head && m[forward->val]>1){
                backward->next=forward->next;
                forward=backward->next;
            }
            else{
                backward=forward;
                forward=forward->next;
            }
        }
        
        return head;
    }
};
