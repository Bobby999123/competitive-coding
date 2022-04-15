#include<bits/stdc++.h>
using namespace std;

int t[6][6];

// Recursion
int knapsack_recursion(int wt[],int val[],int w,int n){

	//Base Case
	if(n==0 || w==0){
		return 0;
	}

	//Choice Diagram

	// If weight of (n-1)th element is greater than weight of bag, we did not able to include it.
	if(wt[n-1]>w){
		return knapsack_recursion(wt,val,w,n-1);
	}

	else if(wt[n-1]<=w){
		//  max(Include,Exclude)
		return max(val[n-1]+knapsack_recursion(wt,val,w-wt[n-1],n-1),knapsack_recursion(wt,val,w,n-1));

	}

}



int knapsack_memoization(int wt[],int val[],int w,int n){

	if(n==0 || w==0){
		t[n][w]=0;
		t[w][n]=0;
		t[0][0]=0;
		return 0;
	}

	if(t[n][w]!=-1){
		return t[n][w];
	}

	//Choice Diagram


	// If weight of (n-1)th element is greater than weight of bag, we did not able to include it.
	if(wt[n-1]>w){
		t[n][w]=knapsack_memoization(wt,val,w,n-1);
		
	}

	else if(wt[n-1]<=w){
		//  max(Include,Exclude)
		t[n][w]=max(val[n-1]+knapsack_memoization(wt,val,w-wt[n-1],n-1),knapsack_memoization(wt,val,w,n-1));

	}
	return t[n][w];

}

void knapsack_top_down(int wt[],int val[],int w,int n){


    // Recursion base case Used to Initilize the matrix.
	for(int i=0;i<n+1;i++){
		for(int j=0;j<w+1;j++){

			cout<<t[i][j]<<" ";
			
			// base case
			if(i==0 || j==0){
				t[i][j]=0;
				t[j][i]=0;
			}

			
			// if(wt[i-1]<=w){
			// 	t[i][j]=max(val[i-1]+t[i-1][w-wt[i-1]],t[i-1][j]);
			// }

			// //If weight of (n-1)th element is greater than weight of bag
			// else if(wt[i-1]>w){
			// 	t[i][j]=t[i-1][j];

			// }
		}
		cout<<endl;
	}

	
	cout<<t[n][w]<<endl;

}



int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	


	int wt[]={1,3,4,5};
	int val[]={1,4,5,7};
	int w=7;
	int n=sizeof(wt)/sizeof(int);

	// initilize the global matrix t[i][j]=-1
	for(int i=0;i<6;i++){
		for(int j=0;j<6;j++){
			t[i][j]=-1;
		}
		
	}

	int profit=knapsack_recursion(wt,val,w,n);
	cout<<profit<<endl;

	// int profit1=knapsack_memoization(wt,val,w,n);
	// cout<<profit1<<endl;

	knapsack_top_down(wt,val,w,n);
	

	// cout<<"matrix" <<endl;

	// for(int i=0;i<6;i++){
	// 	for(int j=0;j<6;j++){
	// 		cout<<t[i][j]<<" ";
	// 	}
	// 	cout<<endl;
		
	// }






	return 0;

}