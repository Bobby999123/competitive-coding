#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* next;
	

	Node(int d){
		this->data=d;
		this->next=NULL;
		
	}

	~Node(){
		int val=this->data;
		if(this->next!=NULL){
			delete next;
			next=NULL;
		}

		cout<<"memory free for node with data "<<val<<endl;

	}
};

void insertInCurcular(Node* tail,int element,int num){
	// assume list is empty
	if(tail==NULL){
		Node* newNode=new Node(num);
		tail=newNode;
		newNode->next=newNode;
	}

	else{
		// non empty list
		Node* curr=tail;
		while(curr->data!=element){
			curr=curr->next;

		}

		Node* temp=new Node(num);
		temp->next=curr->next;
		curr->next=temp;

	}

}

void print(Node* tail){

	Node* temp=tail;
	do{
		cout<<tail->data<<" ";
		tail=tail->next;
	}while(tail!=NULL);
	cout<<endl;
}

int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	


	Node* tail=NULL;

	insertInCurcular(tail,5,3);
	print(tail);



	return 0;

}