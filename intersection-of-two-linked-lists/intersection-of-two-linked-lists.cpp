class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
      
        //through hashmap
        
        unordered_map<ListNode*,int> m1;
        
        while(headA!=NULL)
        {
            m1[headA]++;
            
            headA=headA->next;
        }
        while(headB!=NULL)
        {
            if(m1[headB]>0){return headB;}
            m1[headB]++;
            headB=headB->next;
        }
        
   
       
        
        return NULL;
        
        
        
        
        
        
    }
};