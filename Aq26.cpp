#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;
class Emp{
	int ID;
	string Name;
	double sal;
public:
	void getEmp(){
		cout<<"  Enter Employee's ID : "; 
		cin>>ID;
		cout<<"  Name : ";
		cin>>Name;
		cout<<"  Salary: ";
		cin>>sal;
	}
	void disp(){
		cout<<"  Employee details : \n ";
		cout<<"Name: "<<Name<<"\nID: "<<ID<<"\nSalary: "<<sal<<endl;
	}
	int getID(){ 
		return ID; 
	}
	string getName(){ 
		return Name; 
	}
	double getSal(){ 
	return sal; 
	}
	double updateSal(){ 
	sal= sal + (0.1 * sal); 
	return sal;
	}
};

int main(){
	fstream file;
	file.open("employee.txt", ios::out | ios::in);
	if(!file.is_open()){
		cout<<"Error in opening File\n";
		exit(0);
	}
	Emp e[2];
	for(int j=0;j<2;j++){
		e[j].getEmp();
		file.write((char *) & e[j],sizeof(e[j]));
	}
	int choice;
	string n;
	int id,id2;
	cout<<"1.Search record by name.\n2.Search record by ID.\n";
	cout<<"3.Update salary.\n";
	cout<<"Please select an option to proceed\n";
	while(1){
		cin>>choice;
		switch(choice){
			case 1: cout<<"Enter the name: ";
			cin>>n;
			file.seekg(0);
			for(int i1=0;i1<2;i1++){
			file.read((char *) & e[i1], sizeof(e[i1]));
				file.seekg(0,ios::cur);
				if(n == e[i1].getName())
				e[i1].disp();
		    }
			break;

			case 2: cout<<"Enter ID: ";
			cin>>id;
			file.seekg(0);
			for(int k=0;k<2;k++){
				file.read((char *) & e[k], sizeof(e[k]));
				file.seekg(0,ios::cur);
				if(id == e[k].getID())
				e[k].disp();
			}
			break;

			case 3: cout<<"Enter ID: ";
			cin>>id2;
			file.seekg(0);
			for(int m=0;m<2;m++){
				file.read((char *) & e[m], sizeof(e[m]));
				file.seekg(0,ios::cur);
				if(id2==e[m].getID()){
					e[m].updateSal();
					cout<<"\nUpdated record- ";
					e[m].disp();
				}
			}

			break;
		}
	}
}