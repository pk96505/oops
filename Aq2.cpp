#include<iostream>

using namespace std;

class Employee{
	int employee_id;
	char employee_name[30];
	int date;
	int month;
	int year;
	double salary;
public:
	Employee(){
	salary=25000;
	}
	void add_employee_detail();
	void display_employee_detail();
};

int id=1700;

int main(){
	Employee emp[3];
	for(int i=0;i<3;i++){
	emp[i].add_employee_detail();
	}
	for(int j=0;j<3;j++){
	emp[j].display_employee_detail();
	}
}

void Employee::display_employee_detail(){
	cout<<endl<<"................................."<<endl;
	cout<<endl<<"   Employee Name: "<<employee_name<<endl;
	cout<<"   Employee ID: "<<employee_id<<endl;
	cout<<"   Employee DOB: "<<date<<"-"<<month<<"-"<<year<<endl;
	cout<<"   Salary : "<<salary<<endl;
	cout<<"................................."<<endl;
	}

void Employee::add_employee_detail(){
	cout<<"Name of Employee: ";
	cin>>employee_name;
	cout<<"Enter date of birth: "<<endl;
	cout<<"Date: ";
	cin>>date;
	cout<<"Month: ";
	cin>>month;
	cout<<"Year: ";
	cin>>year;
	employee_id=id;
	id++;
}
	
	


