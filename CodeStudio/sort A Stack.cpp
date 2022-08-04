void insertAtSorted(stack<int>&st,int element){
    if(st.empty()||(!st.empty()&&st.top()<element)){
        st.push(element);
        return;
    }
    int nu = st.top();
    st.pop();
    
    insertAtSorted(st,element);
    
    st.push(nu);
}


void solve(stack<int>&st){
    if(st.empty()){
        return;
    }
    int num = st.top();
    st.pop();
    
    solve(st);
    
    insertAtSorted(st,num);
    
}

void sortStack(stack<int> &stack)
{
	solve(stack);
}