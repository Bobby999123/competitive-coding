#include<bits/stdc++.h>
using namespace std;

void subarray(int arr[],int n){
	long long int largest=0;

	for (int i = 0; i < n; ++i)
	{
		/* code */
		for (int j = i; j <n; ++j)
		{
			/* code */
			long long int sum=0;
			for (int k = i; k <=j ; ++k)
			{
				/* code */
				
				cout<<arr[k]<<" ,";
				sum=sum+arr[k];
			}
			largest=max(largest,sum);
			cout<<endl;
			cout<<"Subarray sum is: "<<sum;
			cout<<endl;
		}
		
	}

	cout<<"The Maximum subarray sum is : "<<largest;
}


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	


	int arr[6];
	for (int i = 0; i < 6; ++i)
	{
		/* code */
		cin>>arr[i];
	}
	
	int n=sizeof(arr)/sizeof(int);

	subarray(arr,n);

	return 0;

}