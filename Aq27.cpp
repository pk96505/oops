#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

class Employee{
	int employee_id;
	char employee_name[30];
	char D_O_B[12];
	double salary;
public:

	void add_employee_detail();
	void display_employee_detail();
	int return_id(){
		return employee_id;
	}
};

int id = 1;

void Employee::display_employee_detail(){
	cout<<endl<<"................................."<<endl;
	cout<<endl<< "  Name of the Employee: "<<employee_name<<endl;
	cout<<"   Employee ID: "<<employee_id<<endl;
	cout<<"   Employee DOB: "<<D_O_B<<endl;
	cout<<"   Salary : "<<salary<<endl;
	cout<<"................................."<<endl;
	}

void Employee::add_employee_detail(){
	fstream iofile("Employee27.txt",ios::out|ios::in|ios::app);
	iofile<<endl<<"................................."<<endl;
	cout<<"Enter name of the Employee: ";
	cin>>employee_name;
	iofile<<"  Name of the Employee: "<<employee_name<<endl;
	cout<<"  Enter Employee ID : ";
	cin>>employee_id;
	iofile<<"  Employee ID: "<<employee_id<<endl;
	cout<<"Enter date of birth in the format of dd/mm/yyyy: ";
    cin>>D_O_B;
	iofile<<"  Employee DOB : "<<D_O_B<<endl;
    cout<<"Enter the salary of the employee: ";
    cin>>salary;
	iofile<<"  Salary : "<<salary<<endl;
	iofile<<endl<<"................................."<<endl;
	id++;
	iofile.close();
}

int main(){
	int i=0;
	Employee e;
	char moredata;
	fstream iofile;
	iofile.open("Employee27.txt",ios::out|ios::in);
	if(!iofile.is_open()){
		cout<<"  Error to file open."<<endl;
		exit(0);
	}
	
	do{
		e.add_employee_detail();
		//iofile.write((char * )&e, sizeof(e));
		cout<<"  Do you want to add more Employee detail (Y/N) : ";
		cout<<sizeof(e);
		cin>>moredata;
	}while(moredata == 'Y' || moredata == 'y');

	iofile.seekg(163);
	string line;
	while(iofile.good()){
	getline(iofile,line);
	cout<<line<<endl;
	}
	iofile.close();
}