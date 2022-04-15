#include<bits/stdc++.h>
using namespace std;

class Hero{
public:
	int health;
	char level;

	//                 1.Default Constructor
	// Hero(){
	// 	cout<<"Constructor called"<<endl;
	// }


	//                2.Parameterised Constructor
	Hero(int health,char ch){
		this->health=health;
		this->level=level;
	}
	

	//               3.Default Copy Constructor

	Hero(Hero &temp){
		this->health=temp.health;
		this->level=temp.level;
	}

};

int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	Hero h1(80,'C');

	cout<<h1.health<<endl;
	cout<<&h1<<endl;

	//               3.Copy Constructor
	Hero ritesh(h1);

	cout<<ritesh.health<<endl;
	cout<<ritesh.level<<endl;

	return 0;

}