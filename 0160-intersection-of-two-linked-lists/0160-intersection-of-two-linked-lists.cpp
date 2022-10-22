// //1 HASHMAP solution
// class Solution {
// public:
//     ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {     
//         unordered_map<ListNode*,int> m1;
        
//         while(headA!=NULL)
//         {
//             m1[headA]++;
//             headA=headA->next;
//         }
//         while(headB!=NULL)
//         {
//             if(m1[headB]>0){return headB;}
//             m1[headB]++;
//             headB=headB->next;
//         }
//         return NULL;
//    }
//};
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {  
       
        ListNode *temp1=headA;
        ListNode *temp2=headB;
while(temp1!=temp2)
{
    if(temp1==NULL)
    {
        temp1=headB;
    }
    else{
        temp1=temp1->next;
    }
    if(temp2==NULL)
    {
        temp2=headA;
    }
    else{
        temp2=temp2->next;
    }
}
        
     return temp1;   
        
        
    }};