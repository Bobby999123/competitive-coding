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
		// cout<<root->data<<" ";
		if(root->right){
			s.push(root->right);
		}
		if(root->left){
			s.push(root->left);
		}
		cout<<root->data<<" ";
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
			temp->right=new Node(rightdata);
			q.push(temp->right);
		}

	}
}

int height_of_Binary_Tree(Node* root){
	int height=0;
	if(root==NULL){
		return height;
	}
	queue<Node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		Node *temp=q.front();
		q.pop();
		if(temp==NULL){
			height++;
			if(!q.empty()){
				q.push(NULL);
			}
		}
		else{
			if(temp->left){
				q.push(temp->left);
			}
			if(temp->right){
				q.push(temp->right);
			}
		}

	}
	return height;
}

int height(Node* root){
	if(root==NULL){
		return 0;

	}
	int left=height(root->left);
	int right=height(root->right);
	int ans=max(left,right)+1;
	return ans;
}
// Diamter --> longest path between two nodes
int diameter(Node* root){

	if(root==NULL){
       return 0;
    }
	int ans=0;
	        
	Node* temp=root;
	        
	// 3 possibilities-> only in left,only in right,combo of both left and left
	int op1=diameter(temp->left);
	int op2=diameter(temp->right);
	int op3=height(temp->left)+height(temp->right)+1;
	        
	        
	ans=max(op1,max(op2,op3));
	return ans;



    //leetcode solution

	// if(root==NULL){
 //       return 0;
 //    }
	// int ans=0;
	        
	// Node* temp=root;
	        
	// // 3 possibilities-> only in left,only in right,combo of both left and left
	// int op1=diameter(temp->left);
	// int op2=diameter(temp->right);
	// int op3=height(temp->left)+height(temp->right);
	        
	        
	// ans=max(op1,max(op2,op3));
	// return ans;

}

pair<int,int> FastDiameter(Node* root){

	if( root==NULL){
		pair<int,int> p=make_pair(0,0);
		return p;
	}

	pair<int,int> left=FastDiameter(root->left);
	pair<int,int> right=FastDiameter(root->right);

	int op1=left.first;
	int op2=right.first;
	int op3=left.second+right.second+1;

	pair<int,int> ans;
	ans.first=max(op1,max(op2,op3));
	ans.second=max(left.second,right.second)+1;

	return ans;


}

int Diameter_of_binary_tree(Node *root){

	return FastDiameter(root).first;
}


bool isBalanced(Node* root) {
        if(root==NULL){
            return true;
            
        }
        
        bool left=isBalanced(root->left);
        bool right=isBalanced(root->right);
        
        bool diff=abs(height(root->left)-height(root->right))<=1;
        
        if(left && right && diff){
            return true;
        }
        return false;
       
        
        
        
    }

pair<bool,int> isBalancedFast(Node* root) {
    if(root==NULL){
        pair<bool,int> p=make_pair(true,0);
        return p;
            
    }

    pair<bool,int> left=isBalancedFast(root->left);
    pair<bool,int> right=isBalancedFast(root->right);

    bool leftAns=left.first;
    bool rightAns=right.first;

    bool diff =abs(left.second-right.second)<=1;

    pair<bool,int> ans;
    ans.second=max(left.second,right.second)+1;     
       
    if(leftAns && rightAns && diff){
        ans.first=true;
    }
    else{
    	ans.first=false;
    }
    return ans;
       
        
        
        
}
bool isBalancedFastCall(Node *root){
	return isBalancedFast(root).first;
}

bool isTreeIdentical(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL){
            return true;
        }    
        if(p!=NULL && q==NULL){
            return false;
        } 
        if(p==NULL && q!=NULL){
            return false;
        } 
        
        bool left=isTreeIdentical(p->left,q->left);
        bool right=isTreeIdentical(p->right,q->right);
        bool value=p->val==q->val;
        
        if(left && right && value){
            return true;
        }
        return false;
    }

pair<bool,int> isSumTreeFast(Node* root){
        if(root==NULL){
            pair<bool,int> p=make_pair(true,0);
            return p;
        }
        if(root->left==NULL && root->right==NULL){
            pair<bool,int> p=make_pair(true,root->data);
            return p;
        }
        
        pair<bool,int> leftAns=isSumTreeFast(root->left);
        pair<bool,int> rightAns=isSumTreeFast(root->right);
        
        bool left=leftAns.first;
        bool right=rightAns.first;
        
        bool condition=root->data==leftAns.second+rightAns.second;
        
        pair<bool,int> ans;
        
        if(left && right && condition){
            ans.first=true;
            // root->data = leftAns.second+rightAns.second;
            ans.second=2*root->data;
        }
        else{
            ans.first=false;
        }
        
        return ans;
        
        
        
    }
bool isSumTree(Node* root)
{
    // Your code here
    isSumTreeFast(root).first;
}    

vector<vector<int>> zigzagLevelOrder(Node* root) {
       vector<vector<int>> ans;
        if(root==NULL){
            return ans;
        }
        queue<Node*> q;
        q.push(root);
        bool flag=true;
        while(!q.empty()){
            vector<int> v;
            int n=q.size();
            for(int i=0;i<n;i++){
                Node* temp=q.front();
                q.pop();
                v.push_back(temp->data);
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            if(flag==false){
                reverse(v.begin(),v.end());
                flag=true;
            }
            else{
                flag=false;
            }
            ans.push_back(v);
            
        }
        return ans;
        
    
    }



int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	Node *root=NULL;
	root=buildTree(root);



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

	// cout<<"Enter the data :"<<endl;
	// buildTreeFromLevelOrderTraversal(root);

	// reverse_levelOrderTraversal(root);
	// cout<<endl<<endl;

	// int h=height_of_Binary_Tree(root);
	// cout<<h<<endl;

	// int ht=height(root);
	// cout<<ht<<endl;

	// cout<<endl;

 //    cout<<"Answer of Diameter of Binary Tree"<<endl;
	// int ans=diameter(root);
	// cout<<ans<<endl;

	// cout<<endl;

 //    cout<<"Answer of Diameter of Binary Tree"<<endl;
	// int ans=Diameter_of_binary_tree(root);
	// cout<<ans<<endl;

	// cout<<endl;

 //    cout<<"Answer of Binary Tree is Balanced"<<endl;
	// bool ans=isBalancedFastCall(root);
	// cout<<ans<<endl;

	// cout<<"Answer of isSumTree"<<endl;
	// bool ans=isSumTree(root);
	// cout<<ans<<endl;

	//Zig Zag Traversal
	cout<<endl<<endl;
	vector<vector<int>> zig=zigzagLevelOrder(root);
	for(int i=0;i<zig.size();i++){
		for(int j=0;j<zig[i].size();j++){
			cout<<zig[i][j]<<" ";
		}
		cout<<endl;
	}





	return 0;

}