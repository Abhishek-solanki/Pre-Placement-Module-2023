class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* hare=head;
        ListNode* tort=head;
        while(n--)
           hare=hare->next;
        ListNode* prev=tort;
        while(hare)
        {  prev=tort;
            tort=tort->next;
            hare=hare->next;
        }
        if(tort==head)
            head=head->next;
        else
         prev->next=tort->next;
            return head;
        
    }
};