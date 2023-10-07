//User function template for C++

/*

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        Node* p=head,*q=head;
        while(q!=NULL && q->next!=NULL){
            p=p->next;
            q=q->next->next;
            if(q==p){
                return true;
            }
        }
        return false;
        
    }
};