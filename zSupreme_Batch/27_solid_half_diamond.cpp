#include<bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	int n;
	cin>>n;



	for(int i=1;i<=n;i++){
		for(int j=1;j<=i;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}

	for(int i=n-1;i>=1;i--){
		for(int j=1;j<=i;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}


}