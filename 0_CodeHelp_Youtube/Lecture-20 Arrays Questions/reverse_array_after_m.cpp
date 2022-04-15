#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr , int m)
{
	int s=m+1;
    int e=arr.size()-1;
    while(s<e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    for (int i = 0; i < arr.size(); ++i)
	{
		/* code */
		cout<<arr[i]<<" ";
	}
}

int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	vector<int> v{1, 2, 3, 4, 5, 6};

	int m=3;
	reverseArray(v,m);

	
	

	return 0;

	
	


}