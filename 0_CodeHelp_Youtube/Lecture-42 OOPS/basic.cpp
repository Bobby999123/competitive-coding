#include<bits/stdc++.h>
// #include "Hero.cpp"
using namespace std;

class Hero{
public:
	char name[100];
private:
	int health;
	char level;


    // for accessing the private member we use getter setter function

    // setter
public:
	void setHealth(int h){
		health=h;
	}

	void setLevel(char ch){
		level=ch;
	}

	//getter
	int getHealth(){
		return health;
	}

	char getLevel(){
		return level;
	}




};


int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	Hero ramesh;

	Hero *h1=new Hero;
	// cout<<sizeof(ramesh)<<endl;
    // ramesh.name="bobby";
	ramesh.setHealth(70);
	ramesh.setLevel('B');

	// h1.setHealth(70);
	// h1.setLevel('B');

	
	cout<<ramesh.getHealth()<<endl;
	cout<<ramesh.getLevel()<<endl;


	h1->setHealth(80);
	h1->setLevel('A');

	cout<<(*h1).getHealth()<<endl;
	cout<<(*h1).getLevel()<<endl;

	cout<<h1->getHealth()<<endl;
	cout<<h1->getLevel()<<endl;



	return 0;

}