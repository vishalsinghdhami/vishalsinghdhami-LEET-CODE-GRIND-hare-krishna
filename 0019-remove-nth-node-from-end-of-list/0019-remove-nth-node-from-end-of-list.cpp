class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {  if(head==NULL||head->next==NULL){return NULL;}
      ListNode* forw=head,*prev=head,*temp= NULL;
        for(int i=0;i<n;i++)
        {
            forw=forw->next;
        }
        if (!forw) return head->next;
        while(forw!=NULL)
        {   temp=prev;
            prev=prev->next;
            forw=forw->next;
        }
    
     temp->next=prev->next;
     prev->next=NULL;
        return head;
    }
};