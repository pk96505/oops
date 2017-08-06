#include<iostream>

using namespace std;

class Employee{
static  int employee_id;
	char employee_name[30];
	int date;
	int month;
	int year;
	double salary;
public:
	Employee(){
	employee_id=1700;
	}
	void add_employee_detail();
	void display_employee_detail();
	
