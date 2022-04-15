#include<bits/stdc++.h>
using namespace std;


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	int n;
	cin>>n;
	int row=1;

	while(row<=n){
		// Space print karlo
		int space=n-row;
		while(space){
			cout<<" ";
			space--;
		}
		int col=1;
		while(col<=row){
			cout<<col;
			col++;
		}
		int start=row-1;
		while(start){
			cout<<start;
			start--;
		}
		cout<<endl;
		row=row+1;


	}

	return 0;

}