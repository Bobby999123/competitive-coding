#include<bits/stdc++.h>
using namespace std;


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	//STL Stack
	
	stack<int> s;
	// push operation
	s.push(22);
	s.push(45);
	s.push(11);



	// pop operation
	s.pop();

	// top operation
	cout<<"top element : "<<s.top()<<endl;

	// empty
	cout<<"stack is empty or not: "<<s.empty()<<endl;

	//stack size
	cout<<"stack size: "<<s.size()<<endl;


	return 0;

}