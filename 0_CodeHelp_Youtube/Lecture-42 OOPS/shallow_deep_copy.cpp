#include<bits/stdc++.h>
using namespace std;

class Hero{
public:
	string name;
	int health;

	Hero(string name,int health){
		
		this->name=name;
		this->health=health;
	}


};

int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	Hero h1("Bobby",80);
	cout<<h1.name<<endl;
	cout<<h1.health<<endl;

	h1.name[0]='G';

	//Shallow copy->copy constructor
	Hero h2(h1);
	
	cout<<h2.name<<endl;

	return 0;

}