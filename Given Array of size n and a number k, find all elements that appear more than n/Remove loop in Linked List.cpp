/*
structure of linked list node:

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        Node *p = head, *q = head ,*prev=NULL;
        while(q!=NULL && q->next!=NULL){
            prev = p;
            p = p->next;
            q = q->next->next;
            
            if(q==p) break;
        }
        if(p!=q) return; 
    
        if(p==head && q==head){
            prev->next=NULL;
            return;
        }
        p=head;
        while(p->next!=q->next){
             p = p->next;
             q = q->next;
        }
        q->next = NULL;
    }
};