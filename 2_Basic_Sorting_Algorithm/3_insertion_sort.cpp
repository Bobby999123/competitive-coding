#include<bits/stdc++.h>
using namespace std;

//Sort the elements in increasing order 
void insertion_sort(int a[],int n){
	int current;
	int prev;

	for (int i = 1; i <=n-1; ++i)
	{
		/* code */
		current=a[i];
		prev=i-1;
		while(prev>=0 and a[prev]>current){
			a[prev+1]=a[prev];
			prev=prev-1;
		}
		a[prev+1]=current;


	}


	
}


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	int arr[] = {-3,-12,90,7,5,-9,9,3,30,50};
	int n=sizeof(arr)/sizeof(int);

	insertion_sort(arr,n);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout<<arr[i]<<" ";
	}

	return 0;

}