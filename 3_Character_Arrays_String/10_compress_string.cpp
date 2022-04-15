#include<bits/stdc++.h>
using namespace std;

string compress(string str){
	string output;
	int n=str.length();
	for (int i = 0; i < n; ++i)
	{
		int count=1;
		while(i<n-1 && str[i]==str[i+1]){
			count++;
			i++;
		}
		output=output+str[i];
		output=output+to_string(count);
	}
	if(n<output.length()){
		return str;
	}
	return output;

}


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	string str1="aabbbbccddee";
	string str2="abcde";
	cout<<compress(str1)<<endl;
	cout<<compress(str2);
	return 0;






	return 0;

}