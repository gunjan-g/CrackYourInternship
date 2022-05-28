class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        
        ListNode *list3;
        
        if(list1->val < list2->val){
            list3=list1;
            list3->next = mergeTwoLists(list1->next,list2);
        }
        else{
            list3=list2;
            list3->next = mergeTwoLists(list1, list2->next);
        }
        return list3;
    }
    
    ListNode* middleNode(ListNode* head) {
        if(head == NULL or head->next == NULL){
            return head;
        }
        
        ListNode *slow = head, *fast = head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next;
            if(fast) fast=fast->next;
        }   
        return slow;
    }
    
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        ListNode *mid= middleNode(head);
        ListNode *list1= head;
        ListNode *list2= mid->next;
        mid->next=NULL;
        list1= sortList(list1);
        list2= sortList(list2);
        ListNode *list3= mergeTwoLists(list1,list2);
        return list3;
    }
};
