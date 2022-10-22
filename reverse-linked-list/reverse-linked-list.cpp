//Iterative solution    prev curr NEXT
//element ko piche jodne sae paehle aage ka address  store rkho
class Solution {
public:
    ListNode* reverseList(ListNode* head) 
    {  if(head==NULL){return head;}
         ListNode* prev=NULL;
         ListNode* curr=head;
         ListNode* forw=head;
        
     while(forw!=NULL)
     {
         forw=curr->next;
         curr->next=prev;
         prev=curr;
         curr=forw;
     }
        head=prev;
        return head;   
    }
};