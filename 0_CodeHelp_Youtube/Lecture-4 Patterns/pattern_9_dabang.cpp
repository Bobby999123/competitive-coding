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

		// first triangle
		int col=1;
		while(col<=(n-row+1)){
			cout<<col;
			col++;

		}
		int star=row-1;
		while(star){
			cout<<"*";
			star--;
		}

		int star2=row-1;
		while(star2){
			cout<<"*";
			star2--;
		}
		int j=n-row+1;
		while(j){
			cout<<j;
			j--;

		}




		cout<<endl;
		row++;


	}

	return 0;

}