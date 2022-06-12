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
                 //       RECURSIVE SOLUTION
class Solution {
public:
    //ListNode* reverse(ListNode* head)
  /*  {   
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
                                                                         
    */
    ListNode *reverseList(ListNode *head)
            {  if(head==NULL){ return NULL;} 
       ListNode *prev=NULL ,*current=head ,*forw=NULL;
        
             while(current!=NULL)
             {
             forw= current->next;
                               
             current->next=prev ;
             
             prev = current;
             
             current=forw;
             }
         return prev;
             
             
             
       
       
  }};




                                                                            
