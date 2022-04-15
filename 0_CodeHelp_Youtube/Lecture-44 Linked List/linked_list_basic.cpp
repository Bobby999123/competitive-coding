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
};

void insertAtBeggining(Node* &head,int d){

	Node* temp=new Node(d);
	temp->next=head;
	head=temp;


}

void insertAtTail(Node* &head,int d){

	Node* temp=head;

	while(temp->next!=NULL){
		temp=temp->next;
	}

	Node* node1=new Node(d);
	temp->next=node1;


}

void insertAtMiddle(Node* head,int pos,int d){

	if(pos==1){

		insertAtBeggining(head,d);
		return;

	}

	int p=1;
	Node* temp=head;
	while(p<pos-1){

		temp=temp->next;
		p++;


	}
	Node* newNode=new Node(d);
	newNode->next=temp->next;
	temp->next=newNode;

}

void print(Node* &head){

	Node* temp=head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<endl;

}

int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	Node* node1=new Node(10);
	// cout<<node1->data<<endl;
	// cout<<node1->next<<endl;

	Node* head=node1;
	Node* tail=node1;
	print(head);

	// insertAtBeggining(head,12);



    // print(head);
    insertAtTail(head,9);
	print(head);
	// insertAtBeggining(head,15);
	// print(head);

	

	insertAtTail(head,8);

	insertAtTail(head,4);
	insertAtTail(head,1);

	insertAtMiddle(head,4,6);
	insertAtMiddle(head,7,22);
	print(head);





	return 0;

}