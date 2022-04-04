 /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
//                        RECURSIVE SOLUTION
class Solution {
public:
    ListNode* reverse(ListNode* head)
    {   
        if(head->next==NULL)
        {
            return  head;
        }
    ListNode *reverseHead =reverse(head->next);
        head ->next->next=head;
        head->next=NULL;
        return reverseHead;
    }
     ListNode *reverseList(ListNode *head){
         if(head==NULL){return NULL;}
         
         return reverse(head);     
     }
    
    
    };
    
//Iterative solution    prev curr NEXT
                                                                         
    /*{  if(head==NULL){ return NULL;} 
       ListNode *prev=NULL ,*current=head ,*NEXT=head->next;
        
        while(current!=NULL ){
          current->next=prev;
            prev=current;
            current=NEXT;
                if(NEXT!=NULL){
                    NEXT=NEXT->next;
                }
             }return prev;
        
  }



*/
                                                                            
