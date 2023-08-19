#include<bits/stdc++.h>
using namespace std;


int partition(vector<int> &arr,int s,int e){

	
    int pivot=arr[s];
	int count=0;

	for (int i = s+1; i <=e; i++)
	{
		/* code */
		if(arr[i]<=pivot){
			count++;
		}

	}
	int pivotIndex=s+count;
	swap(arr[pivotIndex],arr[s]);

	int i=s,j=e;
	while(i<pivotIndex && j>pivotIndex){

		while(arr[i]<=pivot){
			i++;
		}

		while(arr[j]>pivot){
			j--;
		}

		if(i<pivotIndex && j>pivotIndex){
			swap(arr[i],arr[j]);
			i++;
			j--;
		}
	}

	return pivotIndex;
}


void solve(vector<int> &arr,int s,int e){

	//base case
	if(s>=e){
		return;
	}

	//partition
	int p=partition(arr,s,e);

	//left part sort karo
	solve(arr,s,p-1);

	//right part sort karo
	solve(arr,p+1,e);

}

vector<int> quickSort(vector<int>& arr) {
        
    solve(arr,0,arr.size()-1);
    return arr;
}

int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	vector<int> arr{23,60,52,-9,-45,45,10,30};

	

	quickSort(arr);

	for (int i = 0; i < arr.size(); i++)
	{
		/* code */
		cout<<arr[i]<<" ";
	}

	return 0;

}