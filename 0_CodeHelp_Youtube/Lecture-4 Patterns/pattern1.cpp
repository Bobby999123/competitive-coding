#include<bits/stdc++.h>
using namespace std;


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	int n;
	cin>>n;

	int i=1;
	while(i<=n){
		int j=1;
		while(j<=n){
			cout<<"*";
			j++;
		}
		cout<<endl;
		i++;
	}

	return 0;

}