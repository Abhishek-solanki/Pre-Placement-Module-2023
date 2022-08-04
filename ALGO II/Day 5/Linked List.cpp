class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL) return false;
        ListNode *Next=head->next;
        while(Next->next && Next->next->next && Next!=head){
            if(!Next ) return false;
            head=head->next;
            Next=Next->next->next; 
        }
        if(!Next->next) return false;
        if(!Next->next->next) return false;
        return true;
    }
};