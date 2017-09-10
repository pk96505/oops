#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

int emp =0;
int id = 1;
int salary = 25000;

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

	void display_d(){
		cout<<"  Date of Birth : "<<dd<<"/"<<mm<<"/"<<yyyy<<endl;
	}
};

class Employee{
protected:
	char emp_name[30];
	int emp_id;
	float emp_salary;
	Date dob;
public:
/*	Employee(char *n, int i, int s, int d, int m, int y) : dob(d,m,y){
		int len = strlen(n);
		emp_name = new char [len + 1];
		strcpy(emp_name,n);
		emp_id = i;
		salary = s;
	}
*/
	void addemployees_detail(){
		//char name[30];
		cout<<"  Enter the name of Employee : ";
		//cin.ignore(-1);
		//cin.getline(name,30);
		//strcpy(emp_name,name);
		cin>>emp_name;
		emp_id = id;
		emp_salary = salary;
		dob.putdob();
		id++;
	}
	void setsalary(int s){
		salary = s;
	}

	int getsalary(){
		return salary;
	}

	void display_emp_detail(){
		cout<<"  Name : "<<emp_name<<endl;
		cout<<"  ID : "<<emp_id<<endl;
		cout<<"  Salary : "<<salary<<endl;
		dob.display_d();
	}
};

class Manager:protected Employee{
	float bonus;
	int no_emp;
	Employee e[5];
public:
	int i;
	void getbonus();
	void setbonus(int bonus);
	void addmanager_detail(char * n){
		char c;
		strcpy(emp_name,n);
		emp_id = id;
		cout<<"  Enter bonus : ";
		cin>>bonus;
		cout<<"  Do you want to add employee to the Manager (Y/N) : ";
		cin>>c;
		if(c=='Y'||c=='y'){
			addemployees_managed();
		}
		else{
			no_emp = emp;
		}
		setbonus(bonus);
		dob.putdob();
	}
	void addemployees_managed(){
		int m;
		cout<<"  How many employee do you want to add to this Manager (Max. is 5) : ";
		cin>>m;
		for(i=0; i<m; i++){
			e[i].addemployees_detail();
			e[i].display_emp_detail();
			no_emp = emp+1;
			emp++;
		}
	}
	
	void getemployees_managed(){
		for(int j=0; j<i; j++){
			e[j].display_emp_detail();
		}
	}

	void display_m(){
		display_emp_detail();
		cout<<"  Total Employee managed by Manager is : "<<no_emp<<endl;
	}
};

void Manager::getbonus(){
	cout<<"  Bonus is : "<<bonus<<endl;
	cout<<"  Total salary is : "<<getsalary();
}

void Manager::setbonus(int bonus){
	float s,total_salary=0;
	s = getsalary();
	total_salary = s+bonus;
	setsalary(total_salary);
}

int main(){
	char n[30];
	Manager m;
	cout<<"  Enter name of Manager : ";
	cin>>n;
	m.addmanager_detail(n);
	m.display_m();
}
