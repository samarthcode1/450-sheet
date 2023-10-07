/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/


class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
        unordered_set<int> s;
        Node* p = head,* q = NULL;
        while (p != NULL) {
            if (s.find(p->data) != s.end()) {
                q->next = p->next;
                delete (p);
            }
            else {
                s.insert(p->data);
                q = p;
            }
            p = q->next;
        }
        return head;
    }
};