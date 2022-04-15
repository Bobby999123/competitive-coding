#include<bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	// normal array
	int arr[3]={1,2,3};




	// stl array
	// array<int,3> a={4,5,6};
	// int size=a.size();
	// for (int i = 0; i < size; ++i)
	// {
	// 	/* code */
	// 	cout<<a[i]<<" ";
	// }
	// cout<<endl;

	// cout<<a.at(1)<<endl;
	// cout<<a.at(0)<<endl;

	// cout<<a.front()<<endl;
	// cout<<a.back()<<endl;




	// vector<int> v(5,1);
	// // for (int i = 0; i < v.size(); ++i)
	// // {
	// // 	 //code 
	// // 	cout<<v[i]<<" ";
	// // }
	// // cout<<endl;

	// vector<int> last(v);
	// for (int i = 0; i < v.size(); ++i)
	// {
	// 	/* code */
	// 	cout<<v[i]<<" ";
	// }
	// cout<<endl;


	


	vector<int> v;
	cout<<"capacity: "<<v.capacity()<<endl;

	v.push_back(1);
	cout<<"capacity: "<<v.capacity()<<endl;

	v.push_back(2);
	cout<<"capacity: "<<v.capacity()<<endl;
    
    // here we can see that when we put 3 element its capacity gets double.
	v.push_back(3);
	cout<<"capacity: "<<v.capacity()<<endl;
	cout<<"size: "<<v.size()<<endl;

	cout<<"element at postion 2 : "<<v.at(2)<<endl;

	cout<<"element at front: "<<v.front()<<endl;
	cout<<"element at back: "<<v.back()<<endl;

	cout<<"element before poping: ";
	for (int i = 0; i < v.size(); ++i)
	{
		/* code */
		cout<<v[i]<<" ";
	}
	cout<<endl;


	v.pop_back();

	cout<<"element after poping: ";
	for (int i = 0; i < v.size(); ++i)
	{
		/* code */
		cout<<v[i]<<" ";
	}
	cout<<endl;










	return 0;

}

