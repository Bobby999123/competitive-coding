#include<bits/stdc++.h>
using namespace std;
class node{
public:

	int data;
	node *left;
	node *right;

	node(int d){
		this->data=d;
		this->left=NULL;
		this->right=NULL;
	}


};

node* bulidTree(node *root){
	int data;
	cin>>data;

	if(data==-1){
		return NULL;

	}

	root=new node(data);



	
	root->left=bulidTree(root->left);
	
	
	root->right=bulidTree(root->right);
	
}
// void levelOrderTraversal(node *root){
// 	queue<node*> q;
// 	q.push(root);
// 	q.push(NULL);

// 	while(!q.empty()){
// 		node *temp=q.front();
// 		q.pop();

// 		if(temp==NULL){
// 			cout<<endl;
// 			if(!q.empty()){
// 			  q.push(NULL);
// 			}	
// 		}
// 		else{
// 			cout<<temp->data<<" ";
// 			if(temp->left){
// 				q.push(temp->left);
// 			}
// 			if(temp->right){
// 				q.push(temp->right);
// 			}
// 		}
		
// 	}

// }

// void preorder(node* root){
// 	node *temp=root;
// 	if(temp==NULL){
// 		return;
// 	}
// 	cout<<temp->data<<" ";
// 	preorder(temp->left);
// 	preorder(temp->right);
// }

// void inorder(node* root){
// 	node *temp=root;
// 	if(temp==NULL){
// 		return;
// 	}
	
// 	inorder(temp->left);
// 	cout<<temp->data<<" ";
// 	inorder(temp->right);
// }

// void postorder(node* root){
// 	node *temp=root;
// 	if(root==NULL){
// 		return;
// 	}
	
// 	postorder(temp->left);
// 	postorder(temp->right);
// 	cout<<temp->data<<" ";
// }

// void preorderIterative(node* root){
// 	stack<node*> s;
	
// 	if(root==NULL){
// 		return;
// 	}

// 	s.push(root);
// 	while(!s.empty()){
// 		node *temp=s.top();
// 		s.pop();
// 		if(temp->right){
// 			s.push(temp->right);
// 		}
// 		if(temp->left){
// 			s.push(temp->left);
// 		}
// 		cout<<temp->data<<" ";


// 	}

	
// }

int height(node *root){
	if(root==NULL){
		return 0;
	}

	int l=height(root->left);
	int r=height(root->right);

	int ans=max(l,r)+1;
	return ans;
}

int diameter(node *root){
	
	if(root==NULL){
		return 0;
	}

	int option1=diameter(root->left);
	int option2=diameter(root->right);
	int option3=height(root->left)+height(root->right)+1;

	int ans=max(option1,max(option2,option3));
	return ans;

}



int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);


	freopen("output.txt","w",stdout);
#endif	

	node *root=NULL;
	root=bulidTree(root);
	// levelOrderTraversal(root);

	// preorder(root);
	// cout<<endl;
	// // inorder(root);
	// cout<<endl;
	// postorder(root);

	// preorderIterative(root);

	int h=height(root);
	cout<<h<<endl;

	int d=diameter(root);
	cout<<d<<endl;



	return 0;

}