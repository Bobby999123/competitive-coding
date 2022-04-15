#include<bits/stdc++.h>
using namespace std;

int firstOccurence(int arr[],int n,int key){

	int s=0;
	int e=n-1;

	int mid=s+(e-s)/2;
	int ans=-1;

	while(s<=e){

		if(arr[mid]==key){
			ans=mid;
			e=mid-1;
		}
		else if(arr[mid]<key){
			s=mid+1;
		}
		else if(arr[mid]>key){
			e=mid-1;
		}
		mid=s+(e-s)/2;

	}
	return ans;


}

int lastOccurence(int arr[],int n,int key){

	int s=0;
	int e=n-1;

	int mid=s+(e-s)/2;
	int ans=-1;

	while(s<=e){

		if(arr[mid]==key){
			ans=mid;
			s=mid+1;
		}
		else if(arr[mid]<key){
			s=mid+1;
		}
		else if(arr[mid]>key){
			e=mid-1;
		}
		mid=s+(e-s)/2;

	}
	return ans;


}

int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	int arr[]={0,0,0,1,1,1,1,2,3,4,5,5};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;

	int first=firstOccurence(arr,n,key);
	

	int last=lastOccurence(arr,n,key);

	int total=(last-first)+1;
	cout<<total;
	


	return 0;

}