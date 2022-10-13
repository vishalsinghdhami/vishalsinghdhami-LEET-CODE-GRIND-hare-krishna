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
    
//Iterative solution    prev curr NEXT
                                                                         
    
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




                                                                            
