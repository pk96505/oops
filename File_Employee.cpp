#include <iostream>
#include <fstream>

using namespace std;

class Employee{
	int employee_id;
	char employee_name[30];
	char D_O_B[12];
	double salary;
public:

	void add_employee_detail();
	void display_employee_detail();
};

void Employee::display_employee_detail(){
	cout<<endl<<"................................."<<endl;
	cout<<endl<< "  Name of the Employee: "<<employee_name<<endl;
	cout<<"   Employee ID: "<<employee_id<<endl;
	cout<<"   Employee DOB: "<<D_O_B<<endl;
	cout<<"   Salary : "<<salary<<endl;
	cout<<"................................."<<endl;
	}

void Employee::add_employee_detail(){
	cout<<"Name of the Employee: ";
	cin.ignore(-1);
	cin.getline(employee_name,30);
	cout<<"Enter date of birth in the format of dd/mm/yyyy: ";
	cin.ignore(-1);
	cin.getline(D_O_B,12);
        cout<<"Enter the salary of the employee: ";
        cin>>salary;
	employee_id=id;
	id++;
}

int main(){
	fstream iofile;
	Employee e;
	char moredata;
	iofile.open("Employee.txt","ios::in | ios::out | ios::ate | ios::binary ");

	if(iofile.fail()){
		cout<<"  Error to file open.";
		exit(0);
	}

	while('Y' == moredata){
		e.add_employee_detail();
		iofile.write((char * )&e, sizeof(e));
		cout<<"  Do you want to add more Employee detail (Y/N) : ";
		cin>>moredata;
	}

	io
}