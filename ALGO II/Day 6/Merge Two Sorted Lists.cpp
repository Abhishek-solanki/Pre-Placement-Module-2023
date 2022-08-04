class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
             if(!list1)
                 return list2;
            if(!list2)
                return list1;
        ListNode* temp=list1;
        ListNode* prev=list1;
        while(temp && list2)
        { ListNode* n2=list2->next;
         ListNode* n1=temp->next;
            if(list2->val<=temp->val)
            {  if(temp==list1)
            {list2->next=temp; list1=list2;}
               else 
               {list2->next=temp;
               prev->next=list2;  }
             prev=list2;
             list2=n2;
             
            }
         else
         {
             prev=temp;
             temp=n1;
         }
            
         
         
        }
        if(list2)
            prev->next=list2;
        return list1;
    }
};
