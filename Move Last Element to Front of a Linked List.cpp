//User function Template for C++

class Solution{
public:
    ListNode *moveToFront(ListNode *head){
        ListNode* p=head,* q=p->next;
        if(head==NULL || head->next==NULL){
            return head;
        }
        while(q->next){
            p=p->next;
            q=q->next;
        }
        p->next=NULL;
        q->next=head;
        head=q;

        return head;
        
    }
};