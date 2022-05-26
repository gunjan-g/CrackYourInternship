ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* curr = head;
        ListNode* prev = head;
        
        stack<int> st;
        for(int i=0; i<left-1; i++)
        {
             curr=curr->next;
             prev=prev->next;
        }
        
        for(int i=0; i<=(right-left); i++)
        {
            st.push(curr->val);
            curr=curr->next;
        }
        for(int i=0; i<=(right-left); i++)
        {
            prev->val = st.top();
            st.pop();
            prev = prev->next;
        }
        
      return head;  
        
        
    }
