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
	cout<<"Name of the Employee: ";
	cin>>employee_name;
	cout<<"Enter date of birth in the format of dd/mm/yyyy: ";
    cin>>D_O_B;
    cout<<"Enter the salary of the employee: ";
    cin>>salary;
	employee_id=id;
	id++;
}

int main(){
	int i=0;
	fstream iofile;
	Employee e;
	char moredata;
	iofile.open("Emp.dat",ios::binary|ios::out|ios::in);

	if(iofile.fail()){
		cout<<"  Error to file open.";
		exit(0);
	}
	
	do{
		e.add_employee_detail();
		iofile.write((char * )&e, sizeof(e));
		cout<<"  Do you want to add more Employee detail (Y/N) : ";
		cin>>moredata;
	}while(moredata == 'Y' || moredata == 'y');

	iofile.seekg(0,ios::beg);
	while(iofile.read((char * )&e, sizeof(e)))
	{
		e.display_employee_detail();
			if(e.return_id()==4)
				break;
	}		
	iofile.close();
}