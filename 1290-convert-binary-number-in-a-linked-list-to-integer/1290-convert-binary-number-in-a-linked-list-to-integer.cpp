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
//tarika no 1:  REVERSE KRDO PHIR MULTIPLY KRDO SIMPLE..PR jda maehnat
// tarika no 2:  linked list ki length pta kr lo aur utni power sae start sae multiply kroo... aur aage bdte bdte power km krlo..
//tarika no 3: loop chalao aur pucho end tou nhi hori list nahi hori tou aage bd jao aur piche vle ki power bda dou
//tarika no 3:implemented below;
class Solution {
public:
    int getDecimalValue(ListNode* head) 
    {
        int ans =0;
        ListNode *temp=head;
        while(temp!=NULL){
            ans =ans*2;
            ans=ans+(temp->val);
            temp= temp->next;
            
        }
        return ans;
        
    }
};