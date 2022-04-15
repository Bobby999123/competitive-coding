#include<bits/stdc++.h>
using namespace std;

void solve(vector<int> nums,vector<int> output,int index,vector<vector<int>> &ans){
        
        //base case
        if(index>=nums.size()){
            ans.push_back(output);
            return;
        }
        
        //exclude
        solve(nums,output,index+1,ans);
        
        //include
        int element=nums[index];
        output.push_back(element);
        solve(nums,output,index+1,ans);
        
}
    
	    vector<vector<int>> subsets(vector<int>& nums) {
	        
	        vector<vector<int>> ans;
	        vector<int> output;
	        int index=0;
	        solve(nums,output,index,ans);
	        return ans;
	        
	    }


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	vector<int> v{1,2,3};

	vector<vector<int>> answer=subsets(v);

	for (int i = 0; i < answer.size(); ++i)
	{
		/* code */
		for (int j = 0; j < answer[i].size(); ++j)
		{
			/* code */
			cout<<answer[i][j];
		}
		cout<<" ";
		
	}

	return 0;

}