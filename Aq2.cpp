#include<iostream>

using namespace std;

class Employee{
	int employee_id;
static  int nextid;
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

int Employee::nextid=1700;

void Employee::display_employee_detail(){
	if(nextid==1700){
	cout<<"There is no employee please add employee first."<<endl<<endl;
	add_employee_detail();
	}

void Employee::add_employee_detail(char name,int date,int month,int year ){
	
	cout<<"Name of Employee: ";
	gets(employee_name);
	cout<<"Enter date of birth: "<<endl;
	cout<<"Date: ";
	cin>>date;
	cout<<"Month: ";
	cin>>month;
	cout<<"Year: ";
	cin>>year;
	


