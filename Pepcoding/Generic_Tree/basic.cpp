#include<bits/stdc++.h>
using namespace std;

class Node{
public:
	int data;
	vector<Node*> child;
};


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	int arr[]={10,20,50,-1,60,-1,-1,30,70,-1,80,110,-1,120,-1,-1,90,-1,-1,40,100,-1,-1,-1};
	Node *root;
	stack<Node*> st;
	int n=sizeof(arr)/sizeof(int);
	for(int i=0;i<n;i++){
		if(arr[i]==-1){
			st.pop();
		}
		else{
			Node *t=new Node();
			t->data=arr[i];
			if(st.size()>0){
				
				st.top()->child.push_back(t);
				
			}
			else{
				root=t;
			}
			st.push(t);
		}
	}



	return 0;

}