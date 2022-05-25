class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> st;
        ListNode *p=head;
        while(p!=NULL){
            st.push(p->val);
            p=p->next;
        }
        p=head;
        while(p!=NULL){
            if(p->val!=st.top()) return false;
            else{
                p=p->next;
                st.pop();
            }
        }
        return true;
    }
};
