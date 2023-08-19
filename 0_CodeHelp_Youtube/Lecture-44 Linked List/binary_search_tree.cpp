#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node* left;
	Node* right;

	Node(int d){

		this->data=d;
		this->left=NULL;
		this->right=NULL;


	}
};

void createBST(Node* root,int num){
   
   if(root==NULL){
   	  Node* newNode=new Node(num);
   	  return;
   }

   if(root->data>num){
   	 return createBST(root->left,num);
   }

   else{
   	 return createBST(root->right,num);
   }
	
}

void takingInput(Node* root){
    cout<<"Input value:"<<endl;
	int num=14;
	while(num!=-1){
		createBST(root,num);
		cin>>num;
	}
}

void printLevelOrder(Node* root){

	if(root==NULL){
		return ;
	}

	queue<Node*> q;
	q.push(root);
	q.push(NULL);


	while(!q.empty()){
		Node* t=q.front();
		q.pop();

		if(t==NULL){
			cout<<endl;
			if(!q.empty()){
				q.push(NULL);
			}
		}

		else{
			cout<<t->data<<" ";
			if(t->left){
				q.push(t->left);
			}
			if(t->right){
				q.push(t->right);
			}
		}
	}
}




int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	Node* root=NULL;

	takingInput(root);

	printLevelOrder(root);







	return 0;

}