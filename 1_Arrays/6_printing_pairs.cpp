#include<bits/stdc++.h>
using namespace std;
// #define ll long long int
// #define F first
// #define S second 
// #define pb push_back

void printing_pairs(int *arr,int n){

	for (int i = 0; i < n; ++i)
	{
		/* code */
		for (int j = i+1; j < n; ++j)
		{
			/* code */
			cout<<arr[i]<<" ,"<<arr[j]<<endl;
		}
		cout<<endl;
	}

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

	printing_pairs(arr,n);



	return 0;

}