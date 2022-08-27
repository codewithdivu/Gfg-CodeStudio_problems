#include<map>
/****************************************************************

    Following is the class structure of the Node class:

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

bool detectCycle(Node *head)
{
	// first approach 
    
    if(head==NULL){
        return false;
    }
    Node* fast = head;
    Node* slow = head;
    
    while(fast!=NULL && fast->next!=NULL){
        
        fast = fast->next->next;
        slow = slow->next;
        if(slow==fast){
            return true;
        }
    }
    return false;
    
    // second approach
    /*
    
    if(head==NULL){
        return false;
    }
    map<Node*, bool> visited;
    Node* temp = head;
    
    while(temp!=NULL){
        if(visited[temp]==true){
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}