#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define F first
#define S second 
#define pb push_back
vector<vector<int>> v(1e5);
void get(){
		int k;
		cin>>k;
		unordered_map<int, int> h;
		int c = 2;
		int n = k;
		// for(;)
		while(c<sqrt(k) and n>1){
			if(n%c==0){
					h[c]+=1;
					n/=c;
			}else c++;
		}	
		int a = 1;
		int b = 1;
		for(auto x:h){
			if(x.first%2==1){
					int d = x.second/2;
					b = b*pow(x.first, d);
			}
		}
		a = k/b;
		if(a%2==1){
			cout<<"-1 -1"<<endl;
		}else cout<<a<<" "<<b<<endl;
		return;
}
int main(){
		int tc;
		cin>>tc;
		// for(int i=2;i<1e4;i++){
		// 	if(v[i].size()>0) continue;
		// 		int count =1;
		// 		for(int j = i;j<1e4;j=i*count){
		// 			// cout<<j<<endl;
		// 				v[j].push_back(i);
		// 				count+=1;
		// 		}
		// }
		// cout<<"aaya to hai"<<endl;
		// // for(int i=0;i<v[6].siz)
		// // cout<<v[6].size()<<endl;
		// for(int i=0;i<v[6].size();i++){
		// 	cout<<v[6][i]<<endl;
		// }
		while(tc--){
				get();
		}

}