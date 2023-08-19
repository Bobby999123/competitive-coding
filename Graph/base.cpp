#include<bits/stdc++.h>
using namespace std;




int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	// 0 1 0 
// 0 0 1
// 1 0 0



	vector<vector<int>> adjMatrix;
	int n=3; // no of nodes
	int m=3; // no of edges
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>adjMatrix[i][j];

		}
	}

	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<n;j++){
	// 		cout<<adjMatrix[i][j]<<" ";

	// 	}
	// 	cout<<endl;
	// }

	// cout<<" hELLO";






	return 0;

}