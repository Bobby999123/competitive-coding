#include<bits/stdc++.h>
using namespace std;


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	//here we have to count the space alphabets and digit

	char ch;
	ch=cin.get();

	int digit=0;
	int alphabets=0;
	int space=0;

	while(ch!='\n'){
		if(ch>='0' and ch<='9'){
			digit++;
		}
		else if((ch>='a' and ch<='z') or (ch>='A' and ch<='Z')){
			alphabets++;
		}
		else if(ch==' ' or ch=='	'){
			space++;
		}
		ch=cin.get();
	}

	cout<<"Digit: "<<digit<<endl;
	cout<<"Alphabets: "<<alphabets<<endl;
	cout<<"space: "<<space<<endl;


	return 0;

}