#include<bits/stdc++.h>
using namespace std;
// #define ll long long int
// #define F first
// #define S second 
// #define pb push_back

void printArray(int *arr,int n){
	cout<<"In function: "<<sizeof(arr)<<endl;
	// int n=sizeof(arr)/sizeof(int);
	for (int i = 0; i < n ; i++)
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

	int arr[]={1,2,3,4,5,6};

	cout<<"In main: "<<sizeof(arr)<<endl;
	int n=sizeof(arr)/sizeof(int);
	for (int i = 0; i < n ;i++)
	{
		/* code */
		cout<<arr[i]<<" , ";
	}
	cout<<endl;
	printArray(arr,n);


	





	return 0;

}