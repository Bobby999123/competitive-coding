#include<bits/stdc++.h>
#include<cstring>
using namespace std;


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

    // if we not include null character in the end it will give garbage to us
	char arr[]={'a','b','c','d','e','f'};
	cout<<arr<<endl;

	char a[]={'a','b','c','d','e','f','\0'};
	cout<<a<<endl;

	char b[]="abcdefghi";
	cout<<b<<endl;

	cout<<strlen(a)<<endl;
	cout<<sizeof(a)<<endl;

	char inp[100];
	cin>>inp;

	cout<<inp;

	return 0;

}