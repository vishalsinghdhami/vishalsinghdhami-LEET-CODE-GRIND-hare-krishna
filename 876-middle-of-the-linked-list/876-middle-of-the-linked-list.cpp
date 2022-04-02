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
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        
        //Naive SOln 2 iterations witn o(n)
     /*   int n=0;
        ListNode *temp=head;
        while(temp!=NULL)
        {  n++;
            temp= temp->next;
        }
        
        int half=n/2;
        temp=head;
        while(half--)
        {
            temp =temp->next;
        }
        
        return temp;
    */    
        //EFFicient approach
      ListNode *normalspeed=head ,*doublespeed=head;
        
        while(doublespeed!=NULL&&doublespeed->next!=NULL){
            normalspeed=normalspeed->next;
            doublespeed=doublespeed->next->next;
        }
        return normalspeed;
        
        
        
        
}
};