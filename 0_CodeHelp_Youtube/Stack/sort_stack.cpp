void sortedInsert(stack<int> &s,int n){
    //base case
    if(s.empty()){
        s.push(n);
        return;
    }
    
    if(!s.empty()){
        if(s.top()<n){
            s.push(n);
            return;
        }
    }
    
    int num=s.top();
    s.pop();
    
    sortedInsert(s,n);
    s.push(num);
    
  
    
    
}


void sortStack(stack<int> &stack)
{
	// Write your code here
    if(stack.empty()){
        return;
    }
    int num=stack.top();
    stack.pop();
    sortStack(stack);
    sortedInsert(stack,num);
    
    
}