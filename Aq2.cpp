#include<iostream>

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

int id=2100;

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
	cout<<endl<< "  Name of the Employee: "<<employee_name<<endl;
	cout<<"   Employee ID: "<<employee_id<<endl;
	cout<<"   Employee DOB: "<<D_O_B<<endl;
	cout<<"   Salary : "<<salary<<endl;
	cout<<"................................."<<endl;
	}

void Employee::add_employee_detail(){
	cout<<"Name of the Employee: ";
	cin.ignore();
	cin.getline(employee_name,30);
	cout<<"Enter date of birth in the format of dd/mm/yyyy: ";
	cin.ignore();
	cin.getline(D_O_B,12);
        cout<<"Enter the salary of the employee: ";
        cin>>salary;
	employee_id=id;
	id++;
}
	
	



