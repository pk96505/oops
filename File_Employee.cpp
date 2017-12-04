#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

class Date{
	int dd,mm,yyyy;
public:
	void putdob(){
		cout<<"  Enter Date of Birth : "<<endl;
		cout<<"  Enter Date : ";
		cin>>dd;
		cout<<"  Enter Month : ";
		cin>>mm;
		cout<<"  Enter Year : ";
		cin>>yyyy;
	}
	void display_dob(){
		cout<<"  Date of Birth : "<<dd<<"/"<<mm<<"/"<<yyyy<<endl;
	}

	void display_d(){
		fstream file("Aq27_output.txt",ios::out|ios::in|ios::app);
		cout<<"  Date of Birth : "<<dd<<"/"<<mm<<"/"<<yyyy<<endl;
		file<<"  Employee DOB form date : "<<dd<<"/"<<mm<<"/"<<yyyy<<endl;
		file.close();
	}
};

class Employee{
	int employee_id;
	char employee_name[30];
	double salary;
	Date dob;
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
	dob.display_dob();
	cout<<"   Salary : "<<salary<<endl;
	cout<<"................................."<<endl;
	}

void Employee::add_employee_detail(){
	fstream file("Aq27_output.txt",ios::out|ios::in|ios::app);
	file<<endl<<"................................."<<endl;
	cout<<"Name of the Employee: ";
	cin>>employee_name;
	file<<"  Name of the Employee: "<<employee_name<<endl;
	cout<<"  Enter Employee ID : ";
	cin>>employee_id;
	file<<"  Employee ID: "<<employee_id<<endl;
	dob.putdob();
    dob.display_d();
    cout<<"Enter the salary of the employee: ";
    cin>>salary;
	file<<"  Salary : "<<salary<<endl;
	file<<endl<<"................................."<<endl;
	file.close();
}

int main(){
	int i=0,ch;
	fstream iofile;
	Employee e;
	char moredata;
	iofile.open("Employee.txt",ios::in | ios::out );
	iofile.open("Emp.dat",ios::binary|ios::out|ios::in);
	iofile.open("Emp.txt",ios::out|ios::in|ios::app);
	if(iofile.fail()){
		cout<<"  Error to file open.";
		exit(0);
	}

	do{
		e.add_employee_detail();
		iofile.write((char *) & e, sizeof(e));
		cout<<"  Do you want to add more Employee detail (Y/N) : ";
		cin>>moredata;
		}while(moredata == 'Y');
		iofile.close();
	iofile.seekg(0,ios::beg);
	while(iofile.read((char * )&e, sizeof(e)))
	{
		e.display_employee_detail();
			if(e.return_id()==4)
				break;
	}		
	iofile.close();
		cout<<endl<<"  1.Add new Employee to list."<<endl;
		cout<<"  2.Display Employee detail."<<endl;
		cout<<"  3.Get the record by name of Employee."<<endl;
		cout<<"  4.Get the record by ID of Employee."<<endl;
		cout<<"  5.Get the record by record number."<<endl;
		cout<<"  6.Update salary of an employee by 10%."<<endl;
		cout<<"  7.Exit."<<endl;
		cout<<endl<<"  Enter your choice : ";
		cin>>ch;
		switch(ch){
			case 1 :
			do{
				e.add_employee_detail();
				iofile.write((char * )&e, sizeof(e));
				cout<<"  Do you want to add more Employee detail (Y/N) : ";
				cin>>moredata;
			}while(moredata == 'Y' || moredata == 'y');
			break;

			case 2 :
			iofile.seekg(0,ios::beg);
			while(iofile.read((char * )&e, sizeof(e))){
				e.display_employee_detail();
				if(e.return_id()==4)
				break;
			}	
			break;

			case 7 :
			exit(0);
		}
	}while(true);	
iofile.close();
}
