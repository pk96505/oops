#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class Employee{
	int employee_id;
	char *employee_name;
	char *D_O_B;
	double salary;
public:
	Employee();
	Employee(const int id,char *e_name,char * e_dob,double e_s);
	Employee(const Employee &e){
		employee_id = e.employee_id;
		employee_name = e.employee_name;
		D_O_B = e.D_O_B;
		salary = e.salary;
	}

	void add_employee_detail();
	void display_employee_detail();
};

Employee :: Employee(const int id,char *e_name,char * e_dob,double e_s){
		int len_n = strlen(e_name);
		int len_d = strlen(e_dob);
		employee_name = new char [len_n + 1];
		strcpy(employee_name,e_name);
		D_O_B = new char [len_d + 1];
		strcpy(D_O_B,e_dob);
 		employee_id = id;
		salary = e_s;
	}

int id=2100;

int main(){
	Employee emp1(2100,"Pankaj Kumar","25/01/1994",35000);
	Employee emp2(2101,"Gagan","11/08/1994",38000);
	Employee emp3(2102,"Nisha","12/01/1993",39000);
	Employee emp4 = emp1;
	emp1.display_employee_detail();
	emp2.display_employee_detail();
	emp3.display_employee_detail();
	emp4.display_employee_detail();
	/*
	for(int i=0;i<3;i++){
	emp[i].add_employee_detail();
	}
	for(int j=0;j<3;j++){
	emp[j].display_employee_detail();
	}
	*/
}

void Employee::display_employee_detail(){
	cout<<endl<<"................................."<<endl;
	cout<<endl<< "  Name of the Employee: "<<employee_name<<endl;
	cout<<"   Employee ID: "<<employee_id<<endl;
	cout<<"   Employee DOB: "<<D_O_B<<endl;
	cout<<"   Salary : "<<salary<<endl;
	cout<<"................................."<<endl;
	}
/*
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
*/