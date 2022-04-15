#include<bits/stdc++.h>
using namespace std;
// #define ll long long int
// #define F first
// #define S second 
// #define pb push_back

int maximum_subarray(vector<int> nums) {
	// base case
	if(nums.size()==0){
		return 0;
	}

	//logic
    int largest=nums[0];
    int current_sum=nums[0];
    for (int i = 1; i < nums.size(); ++i)
    {
    	/* code */
    	current_sum=max(current_sum+nums[i],nums[i]);
    	largest=max(largest,current_sum);
    }
    
    return largest;
}

int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	vector<int> v={-1,-2,-3,4,5,-6};

	int maximum=maximum_subarray(v);
	cout<<maximum;

	

	return 0;

	

}