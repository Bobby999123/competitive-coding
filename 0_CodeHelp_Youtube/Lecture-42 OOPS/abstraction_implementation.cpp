#include<bits/stdc++.h>
using namespace std;
 
class abstraction{
private:
	int a,b;

public:
	void set(int x,int y){
		a=x;
		b=y;
	}

	void display(){
		cout<<" a : "<<a<<endl;
		cout<<" b : "<<b<<endl;
	}
}; 

int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

    abstraction obj;
    obj.set(10,20);
    obj.display();

	return 0;

}