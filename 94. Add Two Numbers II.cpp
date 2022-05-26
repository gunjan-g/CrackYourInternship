class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        vector<int> v1, v2, v3;
        while(l1!=NULL){
            v1.push_back(l1->val);
            l1=l1->next;
        }
        while(l2!=NULL){
            v2.push_back(l2->val);
            l2=l2->next;
        }
        
        int i=v1.size()-1, j=v2.size()-1, c=0;
        while(i>=0 || j>=0){
            int x= c;
            if(i>=0){
                x+=v1[i];
                i--;
            }
            if(j>=0){
                x+=v2[j];
                j--;
            }
            v3.push_back(x%10);
            c=x/10;
        }
        if(c==1) v3.push_back(1);
        
        ListNode *l3= new ListNode(v3[v3.size()-1]);
        ListNode *tail= l3;
        for(int i=v3.size()-2;i>=0;i--){
            ListNode *temp= new ListNode(v3[i]);
            tail->next=temp;
            tail=temp;
        }
        return l3;
    }
};
