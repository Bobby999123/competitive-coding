#include<bits/stdc++.h>
using namespace std;


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int n;
	cin>>n;
    
    // this cin.get() we use for consuming '\n'
	cin.get();
	char sentence[1000];
	char largest_string[1000];
	int largest_len=0;

	while(n--){
		cin.getline(sentence,1000);
		int len=strlen(sentence);
		if(len>largest_len){
			largest_len=len;
			strcpy(largest_string,sentence);
		}

	}

	cout<<largest_string<<endl;
	cout<<largest_len;



	return 0;

}