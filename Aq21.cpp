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
	void setsalary(int s){
		salary = s;
	}

	int getsalary(){
		return salary;
	}

	void display(){
		cout<<"  Name : "<<emp_name<<endl;
		cout<<"  ID : "<<emp_id<<endl;
		cout<<"  Salary : "<<salary<<endl;
		dob.display_d();
	}
};

class Manager{
	float bonus;
	Employee e[5];
public:
	void getbonus();
	void setbonus();
	void addemployees_managed();
	void getemployees_managed();
};

void Manager::addemployees_managed(){
	
}

void Manager::setbonus(){
	float s,total_salary=0;
	cout<<"  Enter bonus of Manager : ";
	cin>>bonus;
	s = getsalary();
	total_salary = s+bonus;
	setsalary(total_salary);
}

int main(){
	Employee e("Pankaj",101,20000,25,01,1994);
	e.display();
}
