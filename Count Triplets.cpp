int countTriplets(struct Node* head, int x) 
{ 
    // code here.
    unordered_map<int,int>m;
    Node* curr=head;
    int count=0;
    if(!curr || !curr->next || !curr->next->next){
        return 0;
    }
    while(curr->next){
        Node* temp=curr->next;
        while(temp){
            if(m.find(x-curr->data-temp->data)!=m.end()){
                count++;
            }
            temp=temp->next;
        }
        m[curr->data]++;
        curr=curr->next;
    }
    return count;
} 