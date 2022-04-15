#include<bits/stdc++.h>
using namespace std;

//Sort the elements in increasing order 
void bubble_sort(int a[],int n){

	for(int times=1;times<=n-1;times++){
		//repeated swapping
		for(int j=0; j <= n - times - 1; j++ ){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}

	}
}


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	int arr[] = {-3,-12,90,7,5,-9,9,3,30,50};
	int n=sizeof(arr)/sizeof(int);

	bubble_sort(arr,n);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout<<arr[i]<<" ";
	}

	return 0;

}