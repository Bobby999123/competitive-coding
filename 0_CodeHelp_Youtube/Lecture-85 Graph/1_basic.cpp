#include<bits/stdc++.h>
using namespace std;

class graph{
public:

	unordered_map<int,list<int>> adj;
	void addEdge(int u,int v,int direction){

		adj[u].push_back(v);

		// direction = 0  means undirected graph
		if(direction==0){
			adj[v].push_back(u);
		}
	}

	void printAdjList(){
		for(auto i:adj){
			cout<<i.first<<"->";
			for(auto j:i.second){
				cout<<j<<",";
			}
			cout<<endl;
		}
	}


	void bfs(unordered_map<int,list<int>> adj,unordered_map<int,bool> &visited,vector<int> &ans,int node){
		queue<int> q;
		q.push(node);
		visited[node]=true;

		while(!q.empty()){
			int frontNode=q.front();
			q.pop();

			ans.push_back(frontNode);

			for(auto i:adj[frontNode]){
				if(!visited[i]){
					q.push(i);
					visited[i]=true;
				}
			}
		}
	}

	void BFS(unordered_map<int,list<int>> adj){

		vector<int> ans;

		unordered_map<int,bool> visited;

		for(auto x:adj){
			if(!visited[x.first]){
				bfs(adj,visited,ans,x.first);
			}
		}

		// return ans;


		for(int i=0;i<ans.size();i++){
	     	cout<<ans[i]<<",";
	    }
	    cout<<endl;

	}


};




int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

     int n;
     
     // cout<<" Enter the number of nodes";
     cin>>n;

     int m;
     // cout<<"Enter the number of edges";
     cin>>m;

     graph g;

// 5
// 6
// 0 1
// 1 2 
// 2 3 
// 1 3 
// 0 4 
// 4 3

     for(int i=0;i<m;i++){
     	int u,v;
     	cin>>u>>v;

     	g.addEdge(u,v,0);

     	                            

     }

     g.printAdjList();  


     g.BFS();

     










 //    int n=3;
	// vector<vector<int>> v(n,vector<int> (n,0));

	
	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<n;j++){
	// 		cin>>v[i][j];
			
	// 	}
	// }

	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<n;j++){
	// 		cout<<v[i][j]<<" ";	
	// 	}
	// 	cout<<endl;
	// }

	return 0;










}