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

bool detectAndRemoveCycle(Node* head)
{
    if(head==NULL){
        return NULL;
    }
    Node* fast = head;
    Node* slow = head;
    bool hasCycle = false;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            hasCycle = true;
            break;
        }
    }
    
    if(!hasCycle){return false;}
    fast = head;
    while(fast->next!=slow->next){
        fast = fast->next;
        slow = slow->next;
    }
      if(fast == slow){
        while(fast->next != slow){
            fast = fast->next;
        }
        fast->next = NULL;
        return true;
    }
    slow->next = NULL;
    return true;
}
