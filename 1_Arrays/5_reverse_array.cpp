#include<bits/stdc++.h>
using namespace std;
// #define ll long long int
// #define F first
// #define S second 
// #define pb push_back

void reverse_array(int *arr,int n){
	int s=0;
	int e=n-1;
	while(s<e){
		swap(arr[s],arr[e]);
		s=s+1;
		e=e-1;
	}
	

	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout<<arr[i]<<" , ";
	}
	cout<<endl;
	sort(arr,arr+n);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout<<arr[i]<<" , ";
	}
}

int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	int arr[5];
	for (int i = 0; i < 5; ++i)
	{
		/* code */
		cin>>arr[i];
	}
	
	int n=sizeof(arr)/sizeof(int);

	reverse_array(arr,n);


	return 0;

}