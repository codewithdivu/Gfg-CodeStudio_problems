/****************************************************************
    Following is the Linked List node structure

    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/


Node* kReverse(Node* head, int k) {
    // Write your code here.
    int count = 0;
    Node* prev = NULL;
    Node* curr = head;
    Node* ne = NULL;
    
    if(head==NULL){
        return NULL;
    }
    
    while(curr!=NULL && count<k){
        count++;
        ne = curr->next;
        curr->next = prev;
        prev = curr;
        curr = ne;
    }
    
    if(ne!=NULL){
        head->next = kReverse(ne,k);
    }
    return prev;
}