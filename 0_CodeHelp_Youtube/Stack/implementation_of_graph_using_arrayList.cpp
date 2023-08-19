#include<bits/stdc++.h>
#include<list>
using namespace std;

class Edge{
public:
	int src;
	int nbr;
	int wt;

	Edge(int src,int nbr,int wt){
		this->src=src;
		this->nbr=nbr;
		this->wt=wt;
	}
};

int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	int vces=7;
	list<Edge> graph[7]=new list<Edge> ();

	for(int i=0;i<vces;i++){
		graph[i]=new list<Edge>();
	}

	graph[0].push_back(new Edge(0,3,40));
	graph[0].push_back(new Edge(0,1,10));

	graph[1].push_back(new Edge(1,0,10));
	graph[1].push_back(new Edge(1,2,10));


	return 0;

}