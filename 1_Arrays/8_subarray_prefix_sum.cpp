#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define F first
#define S second 
#define pb push_back

void subarray_prefix(int arr[],int n){
	int prefix[n]={0};
	prefix[0]=arr[0];
	for (int i = 1; i < n; ++i)
	{
		/* code */
		prefix[i]=prefix[i-1]+arr[i];
	}
	ll largest=0;

	for (int i = 0; i < n; ++i)
	{
		/* code */
		for (int j = i; j <n; ++j)
		{
			/* code */
			ll sum=0;
			sum=i>0?prefix[j]-prefix[i-1]:prefix[j];
			largest=max(largest,sum);
			cout<<endl;
			// cout<<"Subarray sum is: "<<sum;
			// cout<<endl;
		}
		
	}

	cout<<"The Maximum subarray sum is : "<<largest;
}

int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	int arr[6];
	for (int i = 0; i < 6; ++i)
	{
		/* code */
		cin>>arr[i];
	}
	
	int n=sizeof(arr)/sizeof(int);

	subarray_prefix(arr,n);

	return 0;

	
}