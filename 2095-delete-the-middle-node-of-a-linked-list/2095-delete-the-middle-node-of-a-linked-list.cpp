class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) 
    {  if(head==NULL){return head;}
       if(head->next==NULL){return NULL;}
        
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev=NULL;

        while(fast->next!=NULL)
        {
            if(fast->next->next==NULL)//taking care of even no of nodes
            {   prev=slow;
                slow=slow->next;
                break;
            }
            else
            {  prev=slow;
               slow=slow->next;
               fast=fast->next->next;
            }
        }
             prev->next=slow->next;
             
        return head;
        
        
    }
};