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
};

void insertAtHead(Node* head,int d){



	Node* temp=new Node(d);
	temp->next=head;
	head=temp;


}

void printLinkedList(Node* head){

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
	Node* head=node1;

	insertAtHead(head,10);
	insertAtHead(head,20);
	insertAtHead(head,30);

	printLinkedList(head);




	return 0;

}