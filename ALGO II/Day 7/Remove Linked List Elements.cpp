class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {  
        ListNode *fast=head, *slow=NULL;       
        while(fast!=NULL){
            if(fast->val==val){  
                if(head==fast)
                    head=fast->next;
                else
                    slow->next=fast->next;
            }
            else
                slow=fast;
            fast=fast->next;
        }     
        return head;        
    }
};
       