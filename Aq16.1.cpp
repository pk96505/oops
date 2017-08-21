#include<iostream>

using namespace std;

class Employee{
	int employee_id;
	char employee_name[30];
	char D_O_B[12];
	double salary;
public:
	friend ostream & operator << (ostream &out, const Employee &E);
	friend istream & operator >> (istream &in, Employee &E);
};

int id=2100;

ostream & operator << (ostream &out, const Employee &E){
	out<<endl<<"................................."<<endl;
	out<<endl<< "  Name of the Employee: "<<E.employee_name<<endl;
	out<<"   Employee ID: "<<E.employee_id<<endl;
	out<<"   Employee DOB: "<<E.D_O_B<<endl;
	out<<"   Salary : "<<E.salary<<endl;
	out<<"................................."<<endl;
}

istream & operator >> (istream &in, Employee &E){
	cout<<"Name of the Employee: ";
	in>>E.employee_name;
	cout<<"Enter date of birth in the format of dd/mm/yyyy: ";
	in>>E.D_O_B;
    cout<<"Enter the salary of the employee: ";
    in>>E.salary;
	E.employee_id=id;
	id++;
}

int main(){
	Employee emp[3];
	for(int i=0;i<3;i++){
	cin>>emp[i];
	}
	for(int j=0;j<3;j++){
	cout<<emp[j];
	}
	return 0;
}