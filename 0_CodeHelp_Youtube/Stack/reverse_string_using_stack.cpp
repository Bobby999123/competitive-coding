#include<bits/stdc++.h>
using namespace std;


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	string str="bobby";

	stack<int> s;

	for(int i=0;i<str.length();i++){
		char ch=str[i];
		s.push(ch);
	}

    string ans="";
	while(!s.empty()){
		char ch=s.top();
		ans.push_back(ch);
		s.pop();

	}

	cout<<ans<<endl;

	return 0;

}