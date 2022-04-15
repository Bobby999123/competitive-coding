#include<bits/stdc++.h>
using namespace std;

bool compare(int a,int b){
	return a>b;
}

int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	int arr[] = {-3,-12,90,7,5,-9,9,3,30,50};
	int n=sizeof(arr)/sizeof(int);

	sort(arr,arr+n);
	cout<<"For increasing order: ";
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	sort(arr,arr+n,compare);
	cout<<"For decreasing order: ";
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout<<arr[i]<<" ";
	}


	return 0;

	

}