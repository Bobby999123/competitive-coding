#include<bits/stdc++.h>
using namespace std;

vector<int> spiral(vector<vector<int>> arr){
	int row=arr.size();
	int col=arr[0].size();


   
	vector<int> res;
	int startingRow=0;
	int endingRow=row-1;
	int startingCol=0;
	int endingCol=col-1;

	int count=0;
	int total=row*col;
	while(count<total){
		for(int i=startingCol; count<total && i<=endingCol;i++){
			res.push_back(arr[startingRow][i]);
			count++;
		}
		startingRow++;

		for(int i=startingRow; count<total && i<=endingRow;i++){
			res.push_back(arr[i][endingCol]);
			count++;
		}
		endingCol--;

		for(int i=endingCol; count<total && i>=startingCol;i--){
			res.push_back(arr[endingRow][i]);
			count++;
		}
		endingRow--;

		for(int i=endingRow; count<total && i>=startingRow;i--){
			res.push_back(arr[i][startingCol]);
			count++;
		}
		startingCol++;
		

	}
	return res;
	// for(int r=0;r<row;r++){
	// 	for(int c=0;c<col;c++){
	// 		cout<<res[r][c]<<" ";
	// 	}
	// 	cout<<endl;
	// }



}


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	vector<vector<int>> matrix{{1,2,3,4},{5,6,7,8},{9,10,11,12}};

	
	vector<int> ans=spiral(matrix);
	for (int i = 0; i < ans.size(); ++i)
	{
		/* code */
		cout<<ans[i]<<" ";
	}




	return 0;

}