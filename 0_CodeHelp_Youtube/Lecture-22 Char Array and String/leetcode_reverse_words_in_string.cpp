#include<bits/stdc++.h>
using namespace std;

string reverseString(string s){
	string output;
	int n=s.length();
	int i=0;
	int start=0;
	while(i<n){
		if(s[i]==' '){
			for(int j=i-1;j>=start;j--){
				output=output+s[j];

			}
			output=output+' ';
			start=i+1;
		}
		if(i==n-1){
			for(int j=i;j>=start;j--){
				output=output+s[j];

			}

		}
		i++;
	}
	return output;
}


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	string s="Let's take LeetCode contest";
	string res=reverseString(s);
	cout<<res;


	return 0;

}