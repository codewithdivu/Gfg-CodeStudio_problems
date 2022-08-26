void insertAtBottom(stack<int>&s,int element){
    if(s.empty()){
        s.push(element);
        return;
    }
    int num = s.top();
    s.pop();
    
    insertAtBottom(s,element);
    s.push(num);
}

void stackk(stack<int>& st){
    if(st.empty()){
        return;
    }
    int num = st.top();
    st.pop();
    
    stackk(st);
    
    insertAtBottom(st,num);
}

void reverseStack(stack<int> &stack) {
    // Write your code here
    stackk(stack);
}