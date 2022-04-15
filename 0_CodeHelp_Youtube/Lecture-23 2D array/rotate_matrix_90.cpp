#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
                
            }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
        
 }


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	vector<vector<int>> matrix{{1,2,3},{4,5,6},{7,8,9}};

	
	rotate(matrix);

	for (int i = 0; i < matrix.size(); ++i)
	{
		/* code */
		for (int j = 0; j < matrix[0].size(); ++j)
		{
			/* code */
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	



	return 0;

}