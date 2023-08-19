#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* prev;
	Node* next;

	Node(int d){
		this->data=d;
		this->prev=NULL;
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


void insertAtHead(Node* &head,int num){

	Node* temp=new Node(num);
	temp->next=head;
	head->prev=temp;
	head=temp;





}

void insertAtTail(Node* &head,int num){

	Node* temp=head;
	while(temp->next!=NULL){
		temp=temp->next;
	}

	Node* newNode=new Node(num);
	temp->next=newNode;
	newNode->prev=temp;


}


void insertAtPosition(Node* &head,int pos,int num){
	if(pos==1){
		insertAtHead(head,num);
		return;
	}

	Node* temp=head;
	int c=1;

	while(c<pos-1){
		temp=temp->next;
		c++;
	}

	if(temp->next==NULL){
		insertAtTail(head,num);
	}

	Node* nodeToInsert=new Node(num);
	nodeToInsert->next=temp->next;
	temp->next->prev=nodeToInsert;

	temp->next=nodeToInsert;
	nodeToInsert->prev=temp;





	
	
}

void deleteAtPosition(Node* &head,int pos){
	Node* temp=head;

	if(pos==1){
		temp->next->prev=NULL;
		head=temp->next;
		temp->next=NULL;

		delete temp;


	}

	else{
		int count=1;
		Node* prev=NULL;
		Node* curr=head;

		while(count<pos){
			prev=curr;
			curr=curr->next;
			count++;
		}

		curr->prev=NULL;
		prev->next=curr->next;
		curr->next=NULL;

		delete curr;



	}



}

int getLength(Node* head){
	Node* temp=head;
	int ans=0;

	while(temp!=NULL){
		ans++;
		temp=temp->next;

	}

	return ans;
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



	Node* newNode=new Node(10);
	Node* head=newNode;

	printLinkedList(head);
	cout<<endl;

	int ans=getLength(head);
	cout<<ans<<endl;


	insertAtHead(head,12);
	insertAtHead(head,50);

	printLinkedList(head);

	cout<<endl;

	insertAtTail(head,40);
	insertAtTail(head,100);
	printLinkedList(head);


	cout<<endl;
	insertAtPosition(head,4,300);
	printLinkedList(head);

	cout<<endl;

	insertAtPosition(head,1,20);
	printLinkedList(head);
    cout<<endl;

	deleteAtPosition(head,1);
	printLinkedList(head);







	return 0;

}