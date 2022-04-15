#include<bits/stdc++.h>
using namespace std;


pair<int, int> closest_sum_sorted_array(vector<int> A, int x){
    pair<int,int> res;
    int diff=INT_MAX;
    int s=0;
    int e=A.size()-1;
    int sum;
    int currdiff;
    while(s<e){
        sum=A[s]+A[e];
        if(sum==x){
            res.first=A[s];
            res.second=A[e];
            return res;
        }
        currdiff=abs(x-sum);
        if(currdiff<diff){
            diff=currdiff;
            res.first=A[s];
            res.second=A[e];
        }
        if(sum<x){
            s++;
        }
        else{
            e--;
        }


    }
    return res;

    

}

int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	vector<int> v={10,22,28,29,30,40};

	

	int val;
	cin>>val;

	pair<int,int> p=closest_sum_sorted_array(v,val);

	cout<<p.first<<" and "<<p.second;

	return 0;

}