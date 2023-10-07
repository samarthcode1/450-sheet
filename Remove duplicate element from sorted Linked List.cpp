

/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
 // your code goes here
    Node* p=head;
    while(p!=NULL){
        while(p->next!=NULL && p->data==p->next->data){
            p->next=p->next->next;
        }
        p=p->next;
    }
    return head;
 
}