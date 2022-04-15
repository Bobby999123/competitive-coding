#include<bits/stdc++.h>
using namespace std;

void solve(stack<int>&inputStack, int count,int size){
    
    //base case
    if(count==size/2){
        inputStack.pop();
        return;
    }
    
    int num=inputStack.top();
    inputStack.pop();

    //Recursive call
    solve(inputStack,count+1,size);

    // Put that element in stack
    inputStack.push(num);
}


void deleteMiddle(stack<int>&inputStack, int N){
	
   // Write your code here
    int count=0;
    solve(inputStack,count,N);
    
        
        
    
   
}


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	stack<int> inputStack;
	inputStack.push(10);
	inputStack.push(20);
	inputStack.push(30);
	inputStack.push(40);
	inputStack.push(50);
	inputStack.push(60);

	deleteMiddle(inputStack,6);

	while(!inputStack.empty()){
		cout<<inputStack.top()<<endl;
		inputStack.pop();
	}



	return 0;

}