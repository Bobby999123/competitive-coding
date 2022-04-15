#include<bits/stdc++.h>
using namespace std;
// #define ll long long int
// #define F first
// #define S second 
// #define pb push_back

int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	// vector<int> v={1,2,3,4,5,6};

	// v.pop_back();

	vector<int> v(10,7);

	v.push_back(8);

	int s=v.size();
	int c=v.capacity();
	cout<<s<<" ,"<<c<<endl;


	for (int i = 0; i < v.size(); ++i)
	{
		/* code */
		cout<<v[i]<<" ";
	}
	

	return 0;

}