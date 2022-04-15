#include<bits/stdc++.h>
using namespace std;

//Sort the elements in increasing order 
void selection_sort(int a[],int n){

	for (int pos = 0; pos < n-1; ++pos)
	{
		/* code */
		int current=a[pos];
		int min_position=pos;
		for (int i = pos; i < n; ++i)
		{
			/* code */
			if(a[i]<a[min_position]){
				min_position=i;
			}
		}
		swap(a[pos],a[min_position]);

	}
	


	
}


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	int arr[] = {-3,-12,90,7,5,-9,9,3,30,50};
	int n=sizeof(arr)/sizeof(int);

	selection_sort(arr,n);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout<<arr[i]<<" ";
	}

	return 0;

}