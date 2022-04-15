#include<bits/stdc++.h>
using namespace std;

// Stack implementation using array

class Stack{

	int *arr;
	int top;
	int size;

public:
	Stack(int size){
		this->size=size;
		top=-1;
		arr=new int[size];
	}

	void push(int element){
		if(top<size){
			top++;
			arr[top]=element;
		}
		else{
			cout<<"Stack overflow"<<endl;
		}
	}

	void pop(){
		if(top>=0){
			top--;
		}
		else{
			cout<<"Stack underflow"<<endl;
		}
	}

	int peek(){
		if(top>=0 && top<size){
			return arr[top];
		}
		else{
			return -1;
		}
	}

	bool isEmpty(){
		if(top==-1){
			return true;
		}
		return false;
	}


};


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	Stack st(5);

	st.push(22);
	st.push(11);



	st.pop();
	st.pop();
	st.pop();

	cout<<st.peek()<<endl;

	cout<<st.isEmpty()<<endl;




	
	
	


	return 0;

}