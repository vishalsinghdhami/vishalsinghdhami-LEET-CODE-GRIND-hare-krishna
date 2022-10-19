//1 . NOOB 


//2.optimisied  O(1) SPACE  FAST AND SLOW POINTER intersection
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode*slow=head,*fast=head;
        int mypos=0;
        if(head==NULL||head->next==NULL){return false;}
        
        while(fast!=NULL)
        {
            fast=fast->next;
            slow=slow->next;
            if(fast!=NULL){fast=fast->next;}
           
            if(slow==fast)
            {
                return true;
                break;
            }
            
        }
        return false;
        
        
    }
};