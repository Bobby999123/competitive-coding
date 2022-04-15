#include<bits/stdc++.h>
using namespace std;

vector<int> k_rotation(vector<int> arr,int k)
{
	int n=arr.size();
	vector<int> b;
	for (int i = 0; i < n; ++i)
	{
		/* code */
		b.push_back(arr[i]);
	}
	
	for (int i = 0; i<k; i++)
	{
		int s=0;
	    int e=n-1;
		while(s<e){
		swap(b[s],b[e]);
		s++;
	    }
	}
	return b;
	
}


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	vector<int> v={1,3,5,7,9};
	int k;
	cin>>k;
	vector<int> ans=k_rotation(v,k);
	for (int i = 0; i < ans.size(); ++i)
	{
		/* code */
		cout<<ans[i]<<" ";
	}

	return 0;


}