#include<bits/stdc++.h>
using namespace std;

void solve(string str,string output,int index,vector<string> &ans){

	//base case
	if(index>=str.length()){
		ans.push_back(output);
		return;
	}

	//exclude
	solve(str,output,index+1,ans);


	//include
	char ch=str[index];
	output.push_back(ch);
	solve(str,output,index+1,ans);

}

void printSubstrings(string s){

	int count=0;
	vector<string> ans;
	string output="";
	int index=0;

	solve(s,output,index,ans);

	for (int i = 0; i < ans.size(); i++)
	{
		cout<<ans[i]<<endl;

	}

	
}



int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	string s="abc";
	printSubstrings(s);
	

	return 0;

}