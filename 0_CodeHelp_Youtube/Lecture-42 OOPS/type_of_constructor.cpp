#include<bits/stdc++.h>
using namespace std;

class Bobby{
public:
	int uid;
	string dept;

	//default contructor
	// Bobby(){
	// 	this->uid=3868;
	// 	this->dept="CSE";
	// }

	// paramiterised contructor
	Bobby(int uid,string dept){
		this->uid=uid;
		this->dept=dept;
	}

	//copy constructor
	Bobby(Bobby &obj){
		this->uid=obj.uid;
		this->dept=obj.dept;
	}




};


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	// static object declaretion
	// Bobby b;
	// cout<<b.uid<<endl;
	// cout<<b.dept<<endl;

 //    // dynamic object declaretion
	// Bobby *b1=new Bobby();
	// cout<<b1->uid<<endl;
	// cout<<b1->dept<<endl;

	// Bobby *b=new Bobby(2277,"CSE");
	Bobby b(560,"HM");
	// cout<<b.uid<<endl;
	// cout<<b.dept<<endl;

	// Bobby b;

	Bobby b1(b);

	cout<<b1.uid<<endl;
	cout<<b1.dept<<endl;












	return 0;

}