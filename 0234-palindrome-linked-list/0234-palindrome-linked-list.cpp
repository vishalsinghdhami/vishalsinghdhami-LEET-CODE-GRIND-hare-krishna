//1.O(n) space //solution
//basic solution store list in stack and start poping out elements and in way  compare with linked list;

//2.O(1)space solution
//approach: 
//1st step: middle of linked list using fats and slow pointer;
//2nd step: reverse the list upto middle element and now with a loop start checking from 1st to middle and middle+1 to end that simultaneously that they are equal or not 
class Solution {
public:
    bool isPalindrome(ListNode* head) 
    {   if(head==NULL||head->next==NULL){return true;}
     if(head->next->next==NULL){ if(head->val==head->next->val) {return true; }else {return false; }  }
        ListNode* slow=head;
        ListNode* fast=head;
        
        ListNode* prev=NULL;
        ListNode* forw;
        
        
     while(fast && fast->next)
        {  
        fast=fast->next->next;
         
         forw=slow->next;
         slow->next=prev;
         prev=slow;
         slow=forw;
     }   
  slow = (fast ? slow -> next : slow); // for odd length case as mentioned above
     
     
      while(slow!=NULL)
        {
            if((slow->val)!=(prev->val))
            {
                return false;
            }
            else{slow=slow->next;
                 prev=prev->next;}
        }
        
        
        return true;
     
     
     
        
    }
};