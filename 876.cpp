class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count=0;
        ListNode *start=head;
        while(start!=NULL)
        {
            count++;
            start=start->next;
        }
        
        int n=count/2 +1;
        ListNode * pre;
        while(head!=NULL && n--)
        {
            pre=head;
            head=head->next;
            
        }
        return pre;
        
    }
};