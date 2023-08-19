#include<bits/stdc++.h>
using namespace std;

class Student{
private:
	string studentName;
	int studentRollno;
	int studentAge;

public:
	void setStudentName(string studentName){
		this->studentName=studentName;
	}

	string getStudentName(){
		return studentName;
	}

	void setStudentRollno(int studentRollno){
		this->studentRollno=studentRollno;
	}

	int getStudentRollno(){
		return studentRollno;
	}

	void setStudentAge(int studentAge){
		this->studentAge=studentAge;
	}

	int getStudentAge(){
		return studentAge;
	}





};

int main(){
#ifndef ONLINE_JUDGE	

	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	

	Student s;
	s.setStudentName("Bobby");
	s.setStudentRollno(3868);
	s.setStudentAge(22);

	cout<<s.getStudentName()<<endl;
	cout<<s.getStudentRollno()<<endl;
	cout<<s.getStudentAge()<<endl;

	return 0;

}