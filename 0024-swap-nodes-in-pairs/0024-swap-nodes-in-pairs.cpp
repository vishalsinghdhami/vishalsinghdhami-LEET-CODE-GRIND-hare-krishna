class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* curr=head;
        ListNode* forw=NULL;
        ListNode* prev=NULL;

        int count=0;
        while(curr!=NULL && count<2){
            forw=curr->next;
            curr->next=prev;
            prev=curr;
            curr=forw;
            count++;
        }

        if(forw!=NULL){
            head->next=swapPairs(forw);
        }
        return prev;
    }
};