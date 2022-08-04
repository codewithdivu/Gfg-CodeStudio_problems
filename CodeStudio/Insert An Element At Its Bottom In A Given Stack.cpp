void solve(stack<int>&myStack,int element){
    if(myStack.empty()){
        myStack.push(element);
        return;
    }
    
    int num = myStack.top();
    myStack.pop();
    
    solve(myStack,element);
    
    myStack.push(num);
    
}

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    solve(myStack,x);
    return myStack;
}
