#include<bits/stdc++.h>
using namespace std;


class A{
	A(){
		cout<<"A";
	}
};

class B: public A{
	B(){
		cout<<"B";
	}
};

class C: private B{
	C(){
		cout<<"C";
	}
};

// class Vehicle{
// public:
// 	string color;
// 	int maxSpeed;
// };

// class Car:public Vehicle{
// public:
// 	int gears;
// };


// class Bike:public Vehicle{
// public:
// 	bool twovehicle;
// };

// class Truck:public Vehicle{
// private:
// 	int max_weight;
// };




int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	// Vehicle v;
	// cout<<v.color<<endl;
	// cout<<v.maxSpeed<<endl;

	//create the object of child class 

	// Car c;
	// cout<<c.color<<endl;
	// cout<<c.maxSpeed<<endl;

	// cout<<c.gears<<endl;

	// Bike b;
	// cout<<b.color<<endl;
	// cout<<b.maxSpeed<<endl;

	// cout<<b.twovehicle<<endl;

	B b1=new A();
	B b2=new B();
	// B b3=new C();

	return 0;

}