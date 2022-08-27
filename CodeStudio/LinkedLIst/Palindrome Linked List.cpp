#include<vector>
/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

bool isPalindrome(LinkedListNode<int> *head) {
    	LinkedListNode<int>* temp = head;
        vector<int> v;
    
        while(temp){
            v.push_back(temp->data);
            temp=temp->next;
        }
        
        for(int i=0;i<v.size()/2;i++){
            if(v[i]!=v[v.size()-1-i]){
                return false;
            }
        }
        return true;
}