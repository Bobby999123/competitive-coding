#include<bits/stdc++.h>
using namespace std;

void counting_sort(int arr[],int n){

    // For finding the maximum element to find its range(0-100)
	int largest=INT_MIN;
	// int small=INT_MAX;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		largest=max(largest,arr[i]);
		// small=min(small,arr[i]);
	}
	// cout<<endl;
	// cout<<small<<endl;
    // Insert the counting value in freq vector
	vector<int> freq(largest+1,0);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		freq[arr[i]]++;
	}

	//Put value again in original array
	int j=0;
	for (int i = 0; i <=largest; ++i)
	{
		/* code */
		while(freq[i]>0){
			arr[j]=i;
			freq[i]--;
			j++;

		}
	}
	return;
}

int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	int arr[] = {1, 6, 0,9, 4, 32, 76, 3};
	int n=sizeof(arr)/sizeof(int);

	counting_sort(arr,n);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		cout<<arr[i]<<" ";
	}

	return 0;

}