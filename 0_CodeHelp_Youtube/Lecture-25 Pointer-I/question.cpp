#include<bits/stdc++.h>
using namespace std;


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

    //link:- https://www.codingninjas.com/codestudio/guided-paths/pointers	

	// int a[] = {1, 2, 3, 4};
 //    cout << *(a) << " " << *(a+1);

	// int a[] = {1, 2, 3, 4};
	// int *p = a++;
	// cout << *p << endl;

	// int arr[] = {4, 5, 6, 7};
	// int *p = (arr + 1);
	// cout << *arr + 9;

	char s[]= "hello";
	char *p = s;
	cout << s[0] << " " << p[0];


	return 0;

}