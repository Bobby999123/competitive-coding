#include<bits/stdc++.h>
using namespace std;


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	int a=4;
	int b=6;

	cout<<"a&b= "<<(a&b)<<endl;
	cout<<"a|b= "<<(a|b)<<endl;
	cout<<"~a= "<<(~a)<<endl;
	cout<<"a^b= "<<(a^b)<<endl;

	cout<<endl;

	cout<<"17<<1= "<<(17<<1)<<endl;  //Left shift gives 2*n for smaller no but does not applicable for larger number.
	cout<<"17<<2= "<<(17<<2)<<endl;
	cout<<"17>>1= "<<(17>>1)<<endl;  //Right Shift gives n/2 and gives integer
	cout<<"17>>2= "<<(17>>2)<<endl;

	cout<<endl;

	int i=3;
	cout<<"i++ = "<<i++<<endl; //3 i=4
	cout<<"++i = "<<++i<<endl; //5 i=5
	cout<<"i-- = "<<i--<<endl; //5 i=4
	cout<<"--i = "<<--i<<endl; //3 i=3

	for(int i=0;i<=5;i--){
		cout<<i<<" ";
		i++;
	}

	return 0;

}