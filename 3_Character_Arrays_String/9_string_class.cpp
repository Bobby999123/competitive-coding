 #include<bits/stdc++.h>
 using namespace std;

 
 int main(){
 #ifndef ONLINE_JUDGE	
 
 	freopen("input.txt","r",stdin);
 	freopen("output.txt","w",stdout);
 #endif	
    
    //it is static array
 	// char str[100]={'a','b','c','f','h','\0'};

 	// //string ->dynamic array
 	// // string s="hello bobby";
 	// // cout<<s<<endl;

 	// string s;
 	// getline(cin,s);
 	// // getline(cin,s,'.');
 	// cout<<s<<endl;

 	// for (char i:s)
 	// {
 	// 	/* code */
 	// 	cout<<i<<" ";
 	// }
 	// cout<<endl;

 	int n=5;
 	vector<string> sarr;
 	string temp;
 	while(n--){
 		getline(cin,temp);
 		sarr.push_back(temp);
 	}
 	for(string i:sarr){
 		cout<<i<<endl;
 	}



 
 	return 0;
 
 }