#include<bits/stdc++.h>
using namespace std;

void counting_sort(vector<int> arr){
	int n=arr.size();

	vector<int> freq(200,0);

	for (int i = 0; i < n; ++i)
	{
		/* code */
		freq[arr[i]+100]++;
	}
    int j=0;
	for (int i = 0; i < 200; ++i)
	{
		/* code */
		while(freq[i]>0){
			arr[j]=i-100;
			freq[i]--;
			j++;
		}
	}
	for (int i = 0; i < arr.size(); ++i)
	{
		/* code */
		cout<<arr[i]<<" ";
	}

	
}


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	vector<int> v{1,6,0,-1,9,4,32,76,-98,3};

	counting_sort(v);

	
	

	return 0;

}