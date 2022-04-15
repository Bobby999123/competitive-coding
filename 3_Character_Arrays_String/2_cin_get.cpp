#include<bits/stdc++.h>
using namespace std;


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	char sentence[1000];
	// cin>>sentence;                                          //bobby kumar
	// cout<<sentence;                                         //bobby
    

    //cin.get() function takes only 1 char at a time
    int len=0;

	char temp=cin.get();
	// sentence[len++]=temp;
	while(temp!='#'){
		sentence[len++]=temp;
		// len++;
		// cout<<temp;
		temp=cin.get();

	}
	sentence[len]='\0';

	cout<<sentence<<endl;

	cout<<"Length : "<<len<<endl;

	return 0;

}