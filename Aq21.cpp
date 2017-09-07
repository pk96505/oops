#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

class Date{
	int dd,mm,yyyy;
public:
	Date(int d, int m,int y){
		dd = d;
		mm = m;
		yyyy = y;
	}

	void display_d(){
		cout<<"  Date of Birth : "<<dd<<"/"<<mm<<"/"<<yyyy<<endl;
	}
};

class Employee{
	char *emp_name;
	int emp_id;
	float salary;
	Date dob;
public:
	Employee(char *n, int i, int s, int d, int m, int y) : dob(d,m,y){
		int len = strlen(n);
		emp_name = new char [len + 1];
		strcpy(emp_name,n);
		emp_id = i;
		salary = s;
	}

	void display(){
		cout<<"  Name : "<<emp_name<<endl;
		cout<<"  ID : "<<emp_id<<endl;
		cout<<"  Salary : "<<salary<<endl;
		dob.display_d();
	}
};

int main(){
	Employee e("Pankaj",101,20000,25,01,1994);
	e.display();
}
