#include<bits/stdc++.h>
using namespace std;

string removeSpecialCharacter(string s)
{
	string output;
	s.erase(remove(s.begin(), s.end(), ' '), s.end());
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9')
        {  
        	output+=s[i];
            
            
        }
        
    }
    return output;
}

char tolowercase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}

bool palindrome(string s){

	string str=removeSpecialCharacter(s);


	int n=str.length();
	int st=0;
	int e=n-1;




	while(st<=e){
		if(tolowercase(str[st])!=tolowercase(str[e])){
			return 0;
		}
		else{
			st++;
			e--;
		}
	}
	return 1;
}


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	
	string s;
	getline(cin,s);
	
	bool a=palindrome(s);
	cout<<a;

	

	return 0;

}