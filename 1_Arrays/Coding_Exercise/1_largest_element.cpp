#include<bits/stdc++.h>
using namespace std;
// #define ll long long int
// #define F first
// #define S second 
// #define pb push_back

int largestElement(vector<int> arr) {
    int largest=arr[0];
    for(int i=1;i<arr.size();i++){
        largest=max(largest,arr[i]);
    }
    return largest;
}

int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	vector<int> v={-1,-2,-3,-4,-5,-6};

	int maximum=largestElement(v);
	cout<<maximum;

	

	return 0;

	

}