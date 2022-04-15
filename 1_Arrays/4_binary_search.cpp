#include<bits/stdc++.h>
using namespace std;

int binary_search(int *arr,int n,int k){
	int mid;
	int s=0;
	int e=n-1;
	while(s<=e){
		mid=(s+e)/2;
		if(arr[mid]==k){
			return mid+1;
		}
		else if(arr[mid]>k){
			e=mid-1;
		}
		else{
			s=mid+1;

		}
	}
	return -1;
}

int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	int arr[5];
	for (int i = 0; i < 5; ++i)
	{
		/* code */
		cin>>arr[i];
	}
	// cout<<endl;
	int key;
	cin>>key;
	// sort(arr.begin(),arr.end());
	int n=sizeof(arr)/sizeof(int);

	int index=binary_search(arr,n,key);
	cout<<index;




	return 0;


}