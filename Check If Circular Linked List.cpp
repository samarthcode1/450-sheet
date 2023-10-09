

/* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; 
*/

/* Should return true if linked list is circular, else false */
bool isCircular(Node *head)
{
   // Your code here
   Node* p=head,*q=head;
   while(q && q->next){
       p=p->next;
       q=q->next->next;
       if(p==q){
           return true;
       }
   }
   return false;
}