#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

class Employee{
	int employee_id;
	char employee_name[30];
	char D_O_B[12];
	double salary;
	int record_no;
public:
	void add_employee_detail();
	void display_employee_detail();

	int record_n(){
		return record_no;
	}
	int emp_id(){
		return employee_id;
	}
	void update_salary();
};

static int record = 0;

void Employee::update_salary(){
	salary = salary + (0.1*salary);
}

void Employee::display_employee_detail(){
	cout<<endl<<"................................."<<endl;
	cout<<endl<<"  R.No. "<<record_no<<endl;
	cout<<"  Name of the Employee: "<<employee_name<<endl;
	cout<<"  Employee ID: "<<employee_id<<endl;
	cout<<"  Employee DOB: "<<D_O_B<<endl;
	cout<<"  Salary : "<<salary<<endl;
	cout<<"................................."<<endl;
}

void Employee::add_employee_detail(){
<<<<<<< HEAD
	cout<<"  Enter Record Number : ";
	cin>>record_no;
	cout<<"  Enter name of the Employee: ";
=======
	fstream iofile("Employee27.txt",ios::out|ios::in|ios::app);
		
	cout<<"Enter name of the Employee: ";
>>>>>>> c6840e97e8c57fc84e7ea37bf29aefb5d6c5d0be
	cin>>employee_name;
	cout<<"  Enter Employee ID : ";
	cin>>employee_id;
<<<<<<< HEAD
	cout<<"  Enter date of birth in the format of dd/mm/yyyy: ";
    cin>>D_O_B;
	cout<<"  Enter the salary of the employee: ";
    cin>>salary;
    record++;
=======
	iofile<<"  Employee ID: "<<employee_id<<endl;
	cout<<"Enter date of birth in the format of dd/mm/yyyy: ";
    	cin>>D_O_B;
	iofile<<"  Employee DOB : "<<D_O_B<<endl;
    	cout<<"Enter the salary of the employee: ";
    	cin>>salary;
	iofile<<"  Salary : "<<salary<<endl;
	iofile<<endl<<"................................."<<endl;
	iofile.close();
>>>>>>> c6840e97e8c57fc84e7ea37bf29aefb5d6c5d0be
}

int main(){
	int i=0,count=0;
	int id,ch1,ch2,rn;
	char name[30];
	Employee e;
	char moredata;
	fstream iofile;
	iofile.open("Employee27.txt",ios::app|ios::out|ios::in|ios::ate|ios::binary);
	if(!iofile.is_open()){
		cout<<"  Error to file open."<<endl;
		exit(0);
	}

	do{
		cout<<endl<<"  1.Add new Employee detail to list."<<endl;
		cout<<"  2.Go to Main manu."<<endl;
		cout<<endl<<"  Enter your choice : ";
		cin>>ch1;
		switch(ch1){
			case 1 :
			do{
				e.add_employee_detail();
				iofile.write((char * )&e, sizeof(e));
				cout<<"  Do you want to add more Employee detail (Y/N) : ";
				cin>>moredata;
				count++;
			}while(moredata == 'Y' || moredata == 'y');

			case 2 :
			do{
				iofile.seekp(0,ios::beg);
				cout<<endl<<"  1.Get the record by specifying the Name."<<endl;
				cout<<"  2.Get a random record by specifying the ID."<<endl;
				cout<<"  3.Get a record by specifying the record number."<<endl;
				cout<<"  4.Update salary of an employee by 10% ."<<endl<<endl;
				cout<<"  Enter your choice : ";
				cin>>ch2;
				switch(ch2){
					case 1 :
					/*
					cout<<"  Enter Employee Name : ";
					cin>>name;
					while(iofile.read((char *)&e,sizeof(e))){
						if(name == e.emp_name())
						e.display_employee_detail();
					}*/
					break;
					case 2 :
					cout<<"  Enter Employee ID : ";
					cin>>id;
					while(iofile.read((char *)&e,sizeof(e))){
						if(id == e.emp_id())
						e.display_employee_detail();
					}
					break;

					case 3 :
					cout<<"  Enter Record No. : ";
					cin>>rn;
					while(iofile.read((char *)&e,sizeof(e))){
						if(rn == e.record_n())
						e.display_employee_detail();
					}
					break;

					case 4 :
					cout<<"  Enter Record No. : ";
					cin>>rn;
					e.update_salary();
					iofile.seekg(rn*sizeof(e));
					iofile.write((char * )&e, sizeof(e));
					break;
				}
			}while(true);
		}
	}while(true);
	iofile.close();
}
