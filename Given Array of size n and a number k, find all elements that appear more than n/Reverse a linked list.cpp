/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node* p1=NULL;
        Node* p2=NULL;
        if(head==NULL){
            return nullptr;
        }
        while(head!=NULL){
            p2=p1;
            p1=head;
            head=head->next;
            p1->next=p2;
        }
        head=p2;
        return p1;
    }
    
};
    