#include<bits/stdc++.h>
using namespace std;

void next_permutation_leetcode_31(vector<int> a){

	int idx=-1;

	int n=a.size();
	for(int i=n-1;i>0;i--){
		if(a[i]>a[i-1]){
			idx=i;
			break;
		}
	}
	if(idx==-1){
		reverse(a.begin(),a.end());

	}
	else{
		int prev=idx;
		for(int i=idx+1;i<n;i++){
			if(a[i]>a[idx-1] && a[i]<=a[prev]){
				prev=i;
			}
		}
		swap(a[idx-1],a[prev]);
		reverse(a.begin()+idx,a.end());
	}


}


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	vector<int> v{1,2,3};

	next_permutation_leetcode_31(v);

	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}

	return 0;

}