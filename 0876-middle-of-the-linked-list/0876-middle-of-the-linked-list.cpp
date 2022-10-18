//   /*  //EFFicient approach :USING FAST AND SLOW POINTER
class Solution {
public:
    ListNode* middleNode(ListNode* head) {

ListNode* slow=head;
ListNode* fast=head;
       
        while(fast->next!=NULL)
        {  
            if(fast->next->next==NULL)
                {
                
                slow=slow->next;
                break;
            }
         
            else{
                slow=slow->next;
                fast=fast->next->next;
                }
        }
        
        return slow;
}
};