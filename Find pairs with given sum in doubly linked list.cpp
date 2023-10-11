//User function Template for C++

/* Doubly linked list node class
class Node
{
public:
    int data;
    Node *next, *prev;
    Node(int val) : data(val), next(NULL), prev(NULL)
    {
    }
};
*/

class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        // code here
        Node* temp=head;
        vector<pair<int,int>>v;
        while(temp->next){
            temp=temp->next;
        }
        Node* start=head;
        while(start && temp && start!=temp && start!=temp->next){
            if(start->data+temp->data==target){
                v.push_back(make_pair(start->data,temp->data));
                start=start->next;
                temp=temp->prev;
            }
            else if(start->data+temp->data<target){
                start=start->next;
            }
            else{
                temp=temp->prev;
            }
        }
        return v;
        
        
    }
};