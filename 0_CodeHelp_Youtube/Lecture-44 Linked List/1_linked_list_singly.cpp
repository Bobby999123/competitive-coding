#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* next;

	Node(int data){
		this->data=data;
		this->next=NULL;

	}

	~Node(){
		int value=this->data;
		if(this->next!=NULL){
			delete next;
			this->next=NULL;
		}

		cout<<" memory is free for node with data ="<<value<<endl;
	}



};

void insertAtHead(Node* &head,int n){
	Node* temp=new Node(n);
	// if(head==NULL){
	// 	head=temp;
	// 	return;


	// }

	temp->next=head;
	head=temp;
}

void insertAtTail(Node* &head,int n){
	Node* temp=new Node(n);
	Node* t=head;

	while(t->next!=NULL){
		t=t->next;
	}

	t->next=temp;

}

void insertAtgivenPosition(Node* &head,int pos,int num){

	if(pos==1){
		insertAtHead(head,num);
		return;
	}
	
	Node* temp=head;
	int count=1;

	while(count<pos-1){
		temp=temp->next;
		count++;
	}

	Node* newNode=new Node(num);
	newNode->next=temp->next;
	temp->next=newNode;




}

void deleteAtposition(Node* &head,int pos){

	
	if(pos==1){
		Node* temp=head;
		head=head->next;
		temp->next=NULL;
		delete temp;
	}

	else{
		int c=1;
		Node* prev=NULL;
		Node* curr=head;

		while(c<pos){

			prev=curr;
			curr=curr->next;
			c++;


		}

		prev->next=curr->next;
		curr->next=NULL;
		delete curr ;
	}



}



void printLinkedList(Node* head){
	

	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}




int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	// Node n;
	// cout<<n.data<<endl;
	// cout<<n.next<<endl;



	// Node* newNode=new Node(4);
	Node* head=NULL;

	insertAtHead(head,4);
	insertAtHead(head,7);
	insertAtHead(head,6);
	insertAtHead(head,2);

	insertAtTail(head,30);
	insertAtTail(head,70);

	insertAtgivenPosition(head,3,300);
	insertAtgivenPosition(head,1,200);


	// cout<<newNode->data<<endl;
	// cout<<newNode->next<<endl;

	printLinkedList(head);

	cout<<endl;

	deleteAtposition(head,2);

	printLinkedList(head);


	




	return 0;

}