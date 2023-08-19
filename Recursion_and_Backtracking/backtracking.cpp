#include<bits/stdc++.h>
using namespace std;


int power_2(int n){
	if(n==0){
		return 1;
	}

	if(n%2==0){
		return 4*power_2(n/2);
	}

	else{
		return 4*power_2(n/2)*2;
	}
}


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	int n;
	cin>>n;

	int ans=power_2(n);
	cout<<ans<<endl;

	return 0;

}