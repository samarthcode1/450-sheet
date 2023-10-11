

/* structure for a node 
struct Node
{
	int data;
	struct Node *next;
};
*/

/* Function to delete a given node from the list */
void deleteNode(struct Node **head, int key)
{
    // Your code goes here
    Node * temp=*head,*prev=NULL;
    Node *curr=temp;
    if(curr->data==key){
        curr=curr->next;
        *head=curr;
    }
    while(curr->data!=key){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    return;
}

/* Function to reverse the linked list */
 void reverse(struct Node** head_ref)
{
    // Your code goes here
    Node* prev=NULL;
    Node*curr=*head_ref;
    while(curr){
        Node*next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    *head_ref=prev->next;


}