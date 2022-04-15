#include<bits/stdc++.h>
using namespace std;

//Sort the elements in increasing order 
void bubble_sort(int a[],int n){

	bool swapped;

	for(int times=1;times<=n-1;times++){
		//repeated swapping
		swapped=false;
		for(int j=0; j <= n - times - 1; j++ ){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
				swapped=true;
			}
		}
		if(swapped==false){
			break;
		}

	}
}


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	int arr[] = {1,2,3,4,5,6,7,8,9};
	int n=sizeof(arr)/sizeof(int);

	bubble_sort(arr,n);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout<<arr[i]<<" ";
	}

	return 0;

}