#include<bits/stdc++.h>
using namespace std;

void merge_two_sorted_array(int arr1[],int m,int arr2[],int n,int arr3[]){
	int i=0;
	int j=0;
	int k=0;
	while(i<m && j<n){
		if(arr1[i]<arr2[j]){
			arr3[k++]=arr1[i++];
		}
		else{
			arr3[k++]=arr2[j++];

		}
	}
	while(i<m){
		arr3[k++]=arr1[i++];
	}
	while(j<n){
		arr3[k++]=arr2[j++];
	}
	for (int i = 0; i < m+n; ++i)
	{
		/* code */
		cout<<arr3[i]<<" ";
	}
}


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	int arr1[6]={1,3,5,7,8,9};
	int m=sizeof(arr1)/sizeof(int);
	int arr2[3]={2,4,6};
	int n=sizeof(arr2)/sizeof(int);
	int arr3[9]={0};
	merge_two_sorted_array(arr1,m,arr2,n,arr3);

	return 0;

}