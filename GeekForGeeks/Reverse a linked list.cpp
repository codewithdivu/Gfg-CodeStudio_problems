class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        struct Node* curr = head;
        struct Node* prev = NULL;
        struct Node* ne;
        
        while(curr!=NULL){
            ne = curr->next;
            curr->next = prev;
            
            prev = curr;
            curr = ne;
        }
        return prev;
    }
    
};