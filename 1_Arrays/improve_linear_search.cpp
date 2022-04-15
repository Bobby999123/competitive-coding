#include<bits/stdc++.h>
#include<vector>
using namespace std;
// #define ll long long int
// #define F first
// #define S second 
// #define pb push_back

void  improve_linear_search(vector<int> v){

	for (int i = 0; i < v.size(); ++i)
	{
		/* code */
		cout<<v[i]<<" , ";
	}
}

int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	vector<int> v;

	for (int i = 0; i < 5; ++i)
	{
		/* code */
		cin>>v[i];
	}
	for (int i = 0; i < v.size(); ++i)
	{
		/* code */
		cout<<v[i]<<" , ";
	}

	
	// int key;
	// cin>>key;

	// improve_linear_search(v);




	return 0;

}