#include<bits/stdc++.h>
using namespace std;

bool palindrome(char str[],int n){

	int i=0;
	int j=n-1;
	while(i<j){
		if(str[i]!=str[j]){
			return false;
		}
		i++;
		j--;
	}
	return true;

}


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	char str[1000];
	cin.getline(str,1000);

	int n=strlen(str);

	bool b=palindrome(str,n);
	cout<<b;



	return 0;

}