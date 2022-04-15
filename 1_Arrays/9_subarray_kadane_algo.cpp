#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define F first
#define S second 
#define pb push_back

void subarray_kadane(int arr[],int n){
	int largest=0;
	int cs=0;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cs=cs+arr[i];
		if(cs<0){
			cs=0;
		}
		largest=max(largest,cs);

	}

	cout<<"The Maximum subarray sum is : "<<largest;
}

int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	int arr[9];
	for (int i = 0; i < 9; ++i)
	{
		/* code */
		// -2 3 4 -1 5 -12 6 1 3
		cin>>arr[i];
	}
	
	int n=sizeof(arr)/sizeof(int);

	subarray_kadane(arr,n);

	return 0;

	
}