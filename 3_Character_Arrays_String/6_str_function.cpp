#include<bits/stdc++.h>
using namespace std;


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	char a[100]="apple";
	char b[100];

	cout<<strlen(a)<<endl;

	strcpy(b,a);
	cout<<b<<endl;
	cout<<a<<endl;
    
    //it both the string are same then it will give 0 as the output which means no difference
	cout<<strcmp(a,b)<<endl;

	char web[]="www.";
	char domain[]="codingminutes.com";
	cout<<strcat(web,domain);

	cout<<strcmp(web,domain);









	return 0;

}