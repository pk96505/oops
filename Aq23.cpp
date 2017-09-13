#include <iostream>
#include <cstring>

using namespace std;

class Employee{
	int emp_ID;
	char emp_name[30];
	float emp_salary;
public:
	Employee(int id, char *name, float s){
		emp_ID = id;
		strcpy(emp_name,name);
		emp_salary = s;
	}

	Employee & greater(Employee & E){
		if(E.emp_salary >= emp_salary)
			return E;
		else
			return *this;
	}

	void display(){
		cout<<"  Employee ID : "<<emp_ID<<endl;
		cout<<"  Employee name : "<<emp_name<<endl;
		cout<<"  Employee Salary : "<<emp_salary<<endl;
	}

};

int main(){
	Employee E1(1,"Pankaj",30000),E2(2,"Gagan",35000);
	E1.display();
	E2.display();
	cout<<endl<<"********************************"<<endl<<endl;
	Employee E3 = E1.greater(E2);
	cout<<"  Greater salary has "<<endl;
	E3.display();
	cout<<endl;
}