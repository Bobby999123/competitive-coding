#include<bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int num=5;
	cout<<num<<endl;

    // address opertor(&) that gives the address of the variable
	cout<<&num<<endl;
	cout<<endl;

    // pointer is used to store the address
	int *ptr=&num;
	cout<<ptr<<endl;
	cout<<*ptr<<endl;
	cout<<endl;


    cout<<(*ptr)++<<endl;
	cout<<(*ptr)<<endl;
	cout<<endl;


    // pointer and variable having the same datatype
	char ch='a';
	char *p=&ch;

	cout<<p<<endl;
	cout<<*p<<endl;
	cout<<endl;

	double d=4.6;
	double *p2=&d;

	cout<<p2<<endl;
	cout<<*p2<<endl;
	cout<<endl;

	//Size of variable and pointer
	cout<<"Size of variable and pointer"<<endl;
	cout<<sizeof(num)<<endl;

	cout<<sizeof(ptr)<<endl; //size of pointer is always = 8 for 64 bit because it store the address

	cout<<endl;


    // BAD PRACTICE
	int *pi;
	cout<<*pi<<endl; //garbage value
	cout<<endl;

	int i=5;
	int *q=0;            //points to null 
	q=&i;                //now pointing to i
	cout<<*q<<endl;

	int n=3;
	int a=n;
	a++;
	cout<<n<<endl;        //here value does not change 

	int *pa=&n;
	cout<<"before : "<<n<<endl;
	(*pa)++;
	cout<<"after : "<<n<<endl;


    // Important Concept
	int s=3;
	int *t=&s;

	*t=*t+1;
	cout<<*t<<endl;
	cout<<"before : "<<t<<endl;
	t=t+1;
	cout<<"after : "<<t<<endl;  // if we increase the pointer it will point to next location
	// if datatype is int then it will increase by 4

	











	return 0;

}