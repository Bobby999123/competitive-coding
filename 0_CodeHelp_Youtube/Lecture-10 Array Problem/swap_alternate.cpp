#include<bits/stdc++.h>
using namespace std;

void swap_alternate(int arr[],int n){

	// int s=0;
	// int e=1;
	// while(s<n-1 && e<n-1){
	// 	swap(arr[s],arr[e]);
	// 	s+=2;
	// 	e+=2;
	// }

	for (int i = 0; i < n; i+=2)
	{
		/* code */
		if(i+1<n){
			swap(arr[i],arr[i+1]);
		}
	}
}


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	int arr[]={1,2,3,4,5,6,7};
	int n=sizeof(arr)/sizeof(int);

	swap_alternate(arr,n);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout<<arr[i]<<" ";
	}


	return 0;

}