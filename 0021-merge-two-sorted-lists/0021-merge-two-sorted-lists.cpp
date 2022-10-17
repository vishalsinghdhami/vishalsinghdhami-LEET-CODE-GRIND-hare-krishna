class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    
    {  
       ListNode *ans, *temp;
        ans = new ListNode();
        temp = ans;
     
        ListNode* temp1=list1;
        ListNode* temp2=list2;
     if(list1==NULL){return list2;}
   else  if(list2==NULL){return list1;}
     
       else{ while(temp1&&temp2)
        {
            if((temp1->val)<(temp2->val))
            {  
                temp->next=temp1;
                temp1=temp1->next;
                temp=temp->next;
                
                
            }
            else
            {
                temp->next=temp2;
                temp2=temp2->next;
                temp=temp->next;

                
            }
            
        }
               if(temp1) temp->next = temp1;
        if(temp2) temp->next = temp2;
            
           }
        
        return ans->next;
        
        
        
    }
};