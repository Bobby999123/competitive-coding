#include<bits/stdc++.h>
using namespace std;
// #define ll long long int
// #define F first
// #define S second 
// #define pb push_back

int lower_bound(vector<int> A, int Val) {
    // your code goes here
    
    int curr_value;

    for(int i=0;i<A.size();i++){

       

        if(Val==A[i]){

            curr_value = A[i];

            break;

        }

        if(Val<A[i]){

            curr_value = A[i-1];

            break;

        }

    }

    return curr_value;


    
}

int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	vector<int> v={-1,-2,-3,4,5,-6};

	sort(v.begin(),v.end());

	int val;
	cin>>val;

	int mini=lower_bound(v,val);
	cout<<mini;

	return 0;

}