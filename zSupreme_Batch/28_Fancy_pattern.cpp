#include<bits/stdc++.h>
using namespace std;


void fancypattern1(int n){

	// ********1********
	// *******222*******
	// ******33333******
	// *****4444444*****
	// ****555555555****


	for(int i=1;i<=n;i++){
		for(int j=1;j<=((2*n)-i)-1;j++){
			cout<<"*";
		}
		
		

		for(int j=1;j<=(2*i)-1;j++){
			cout<<i;


		}

		for(int j=1;j<=((2*n)-i)-1;j++){
			cout<<"*";
		}

		cout<<endl;
	}

}

void fancypattern(int n){

	// ********1********
	// *******2*2*******
	// ******3*3*3******
	// *****4*4*4*4*****
	// ****5*5*5*5*5****

	for(int i=0;i<n;i++){
		int start_num_index = 8-i;
		int num = i+1;
		int count_num = num;

		for(int j=0;j<17;j++){
			if(j==start_num_index && count_num>0){
				cout<<num;
				start_num_index+=2;
				count_num--;
			}
			else{
				cout<<"*";
			}
		}

		cout<<endl;
	}
}

int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	int n;
	cin>>n;

	fancypattern1(n);

	cout<<endl;
	cout<<endl;



	fancypattern(n);






	return 0;

}