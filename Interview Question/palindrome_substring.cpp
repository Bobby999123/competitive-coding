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

bool palindrome(string str){

	if(str.length()==0){
		return false;
	}
	if(str.length()==1){
		return true;
	}
	int i=0;
	int j=str.length()-1;
	while(i<=j){
		if(str[i++]!=str[j--]){
			return false;
		}
	}
	return true;
}

int countSubstrings(string s){

	int count=0;
	vector<string> ans;
	string output="";
	int index=0;

	solve(s,output,index,ans);

	for (int i = 0; i < ans.size(); i++)
	{
		cout<<ans[i]<<endl;
		if(palindrome(ans[i])){
			count++;
		}

	}


	// for (int i = 0; i < ans.size(); i++)
	// {
		
	// 	if(palindrome(ans[i])){
	// 		count++;
	// 	}

	// }
	return count;
}



int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	string s="abccba";
	int a=countSubstrings(s);
	cout<<a<<endl;

	return 0;

}