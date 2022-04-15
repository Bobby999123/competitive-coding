#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	Node *left;
	Node *right;

	Node(int d){
		this->data=d;
		this->left=NULL;
		this->right=NULL;
	}


};

Node* buildTree(Node* root){
    int d;
    cin>>d;
	cout<<"Enter the value: "<<d<<endl;

	if(d==-1){
		return NULL;
	}

	root=new Node(d);

	cout<<"Enter the left value of "<<d<<endl;
	root->left=buildTree(root->left);

	cout<<"Enter the right value of "<<d<<endl;
	root->right=buildTree(root->right);

	return root;


}

void levelOrderTraversal(Node* root){
	queue<Node*> q;
	q.push(root);
	q.push(NULL);
	cout<<endl<<endl;
	cout<<"Answer of reverse_levelOrderTraversal"<<endl;
	

	while(!q.empty()){
		Node* temp=q.front();
		q.pop();

		if(temp==NULL){
			cout<<endl;
			if(!q.empty()){
				q.push(NULL);
			}


		}
		else{
			cout<<temp->data<<" ";
				if(temp->left){
					q.push(temp->left);
				}
				if(temp->right){
					q.push(temp->right);
				}
		}

		
	}
}


void reverse_levelOrderTraversal(Node* root){
	queue<Node*> q;
	stack<int> s;
	q.push(root);
	q.push(NULL);
	
	cout<<"Answer of levelOrderTraversal"<<endl;
	

	while(!q.empty()){
		Node* temp=q.front();
		q.pop();

		if(temp==NULL){
			cout<<endl;
			if(!q.empty()){
				q.push(NULL);
			}


		}
		else{
			s.push(temp->data);
				if(temp->left){
					q.push(temp->left);
				}
				if(temp->right){
					q.push(temp->right);
				}
		}
	}

	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
}

void preOrder(Node* root){
	Node *temp=root;
	if(temp==NULL){
		return;

	}

	cout<<temp->data<<" ";
	preOrder(temp->left);
	preOrder(temp->right);
}

void inOrder(Node* root){
	Node *temp=root;
	if(temp==NULL){
		return;

	}

	
	inOrder(temp->left);
	cout<<temp->data<<" ";
	inOrder(temp->right);
}

void postOrder(Node* root){
	
	if(root==NULL){
		return;

	}

	
	postOrder(root->left);
	postOrder(root->right);
	cout<<root->data<<" ";
}

void preOrder_iterative(Node* root){

	if(root==NULL){
		return;
	}
	stack<Node*> s;
	s.push(root);

	while(!s.empty()){
		root=s.top();
		s.pop();
		cout<<root->data<<" ";
		if(root->right){
			s.push(root->right);
		}
		if(root->left){
			s.push(root->left);
		}
	}
}

void buildTreeFromLevelOrderTraversal(Node* root){
	queue<Node*> q;
	int data;
	cin>> data;
	root=new Node(data);
	q.push(root);

	while(!q.empty()){
		Node* temp=q.front();
		q.pop();

		int leftdata;
		cin>>leftdata;
		if(leftdata!=-1){
			temp->left=new Node(leftdata);
			q.push(temp->left);
		}

		int rightdata;
		cin>>rightdata;

		if(rightdata!=-1){
			temp->left=new Node(rightdata);
			q.push(temp->right);
		}

	}
}

int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	Node *root=NULL;
	// root=buildTree(root);

	// levelOrderTraversal(root);

	// reverse_levelOrderTraversal(root);
	// cout<<endl<<endl;
    
 //    cout<<"Answer of preOrder"<<endl;
	// preOrder(root);
	// cout<<endl;

	// cout<<"Answer of inOrder"<<endl;
	// inOrder(root);
	// cout<<endl;


	// cout<<"Answer of postOrder"<<endl;
	// postOrder(root);
	// cout<<endl;

	// cout<<"Answer of preOrder_iterative"<<endl;
	// preOrder_iterative(root);
	// cout<<endl;

	cout<<"Enter the data :"<<endl;
	buildTreeFromLevelOrderTraversal(root);

	reverse_levelOrderTraversal(root);
	cout<<endl<<endl;




	return 0;

}