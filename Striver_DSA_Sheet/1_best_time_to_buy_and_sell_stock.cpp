#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices){
	int profit=0;
	int minimum=INT_MAX;
	for (int i = 0; i < prices.size(); ++i)
	{
		/* code */
		minimum=min(minimum,prices[i]);
		profit=max(profit,prices[i]-minimum);
	}
	return profit;
}


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	vector<int> prices{7,1,5,3,6,4};

	int max_profit=maxProfit(prices);
	cout<<max_profit;



	return 0;

}