class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        
        ListNode *list3;
        if(list1->val < list2->val){
            list3=list1;
            list3->next = mergeTwoLists(list1->next,list2);
        }
        else{
            list3=list2;
            list3->next = mergeTwoLists(list1,list2->next);
        }
        return list3;
    }
};
