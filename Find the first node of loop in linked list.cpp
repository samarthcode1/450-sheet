//User function Template for C++

/*struct Node
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
     //Function to find first node if the linked list has a loop.
    int findFirstNode(Node* head)
    {
        // your code here
        if (head == NULL || head->next == NULL)
        return -1;
 
    Node *p = head, *q = head;
    // p = p->next;
    // q = q->next->next;
    while (q && q->next) {
        p = p->next;
        q = q->next->next;
        if (p == q)
            break;
    }
    if (p != q)
        return -1;
    p = head;
    while (p != q) {
        p = p->next;
        q = q->next;
    }
    return p->data;
    }
};