/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/


class Solution{
  public:
    void print(Node* head){
        Node* temp=head;
        while(temp){
            cout<<temp->data<< " ";
        
            temp=temp->next;
            
        }
        cout<<endl;
    }
  Node* reverse(Node* head){
    Node* p1=NULL;
    Node* p2=NULL;
    if(head==NULL){
        return NULL;
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
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        if(!head && !head->next){
            return true;
        }
        Node* fast=head,*slow=head;
        while(fast->next && fast->next->next){
            fast=fast->next->next;
            slow=slow->next;
        }
        slow->next=reverse(slow->next);
        slow=slow->next;
        Node* temp=head;
        while(slow){
            if(temp->data!=slow->data){
                return false;
            }
            temp=temp->next;
            slow=slow->next;
        }
        return true;
        
        // Node* temp=head;
        // int count=0;
        // while(temp){
        //     temp=temp->next;
        //     count++;
        // }
        // bool flag=false;
        // Node* head1=head;
        // if(count%2==0){
        //     int mid=count/2;
        //     int i=0;
        //     while(i!=mid){
        //         head1=head1->next;
        //         i++;
        //     }
        //     Node *head2=reverse(head1);
        //     print(head2);
        //     head1=head;
        //     print(head1);
        //     while(head1 && head2 && (head1->data==head2->data)){
        //         head1=head1->next;
        //         head2=head2->next;
        //         if(head1->data==head2->data){
        //             flag=true;
        //         }
        //         else{
        //             flag=false;
        //         }
        //     }
        // }
        // else{
        //     int mid=(count-1)/2;
        //     int i=0;
        //     while(i!=mid && head1){
        //         head1=head1->next;
        //         i++;
        //     }
        //     head1=head1->next;
        //     Node *head2=reverse(head1);
        //     print(head2);
        //     head1=head;
        //     print(head1);
        //     while(head1 && head2 && (head1->data==head2->data)){
        //         head1=head1->next;
        //         head2=head2->next;
        //         if(head1->data==head2->data){
        //             flag=true;
        //         }
        //         else{
        //             flag=false;
        //         }
        //     }
        // }
        // return flag;
    }
};
