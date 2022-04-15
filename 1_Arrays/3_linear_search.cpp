#include<bits/stdc++.h>
using namespace std;
// #define ll long long int
// #define F first
// #define S second 
// #define pb push_back

int  linear_search(int *arr,int n,int k){
	for (int i = 0; i < n; ++i)
	{
		/* code */
		if(arr[i]==k){
			return i+1;
		}
	}
	return -1;



}

int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	int arr[]={10,20,60,50,30,60,70};

	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;

	cout<<linear_search(arr,n,key);




	return 0;

}