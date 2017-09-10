#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

class person{
protected:
	char * name;
	int id;
public:
	void putdetail_person(const char *n, int i){
		int len = strlen(n);
		name = new char[len+1];
		strcpy(name,n);
		id = i;
	}

	void update_name(const char * n){
		int len = strlen(n);
		name = new char[len+1];
		strcpy(name,n);
	}

	void update_id(int n_id){
		id = n_id;
	}
};

class account:virtual protected person{
protected:
	int pay;
public:
	void putdetail_acc(const char * n, int i, int p){
		putdetail_person(n,i);
		pay = p;
	}

	void update_pay(int n_pay){
		pay = n_pay;
	}
};

class admin:virtual protected person{
protected:
	int experience;
public:
	void putdetail_admin(const char * n, int i, int e){
		putdetail_person(n,i);
		experience = e;
	}

	void update_name(const char * n){
		person::update_name(n);
	}

	void update_id(int id){
		person::update_id(id);
	}

	void update_exp(int n_exp){
		experience = n_exp;
	}
};

class master:protected account, protected admin{
public:
	void putdetail_m(const char * n, int i, int p, int e){
		putdetail_acc(n,i,p);
		putdetail_admin(n,i,e);
		putdetail_person(n,i);
	}

	int check_id(){
		return id;
	}
	
	void update_info(){
		int ch,o_id,n_id,n_pay,o_pay,n_exp,o_exp;
		char new_name[30];
		char old_name[30];
		cout<<endl<<"  Which attribute do you want to update : ";
		cout<<endl<<"  1.Name."<<endl<<"  2.ID."<<endl<<"  3.Pay."<<endl<<"  4.Experience."<<endl;
		cout<<endl<<"  Enter your choice : ";
		cin>>ch;
		switch(ch){
			case 1 :
			cout<<"  Enter old name : ";
			cin>>old_name;
			cout<<"  Enter new name : ";
			cin>>new_name;
			admin::update_name(new_name);
			break;

			case 2 :
			cout<<"  Enter old ID : ";
			cin>>o_id;
			cout<<"  Enter new ID : ";
			cin>>n_id;
			admin::update_id(n_id);
			break;

			case 3 :
			cout<<"  Enter old Pay : ";
			cin>>o_pay;
			cout<<"  Enter new Pay : ";
			cin>>n_pay;
			account::update_pay(n_pay);
			break;

			case 4 :
			cout<<"  Enter old Experience : ";
			cin>>o_exp;
			cout<<"  Enter new Experience : ";
			cin>>n_exp;
			admin::update_exp(n_exp);
			break;
		}
	}	

	void display(){
		cout<<endl<<"  Name : "<<name<<endl;
		cout<<"  ID : "<<id<<endl;
		cout<<"  Pay : "<<pay<<endl;
		cout<<"  Experience : "<<experience<<endl;
	}
};
int main(){
	int ch,i,j,m,id,pay,exp;
	char name[30];
	cout<<"  How many master do you want to create : ";
	cin>>m;
	master M[m];
	for(i=0; i<m; i++){
		cout<<endl<<"  Enter the detail of Master["<<i+1<<"] : "<<endl;
		cout<<endl<<"  Enter name of master : ";
		cin>>name;
		cout<<"  Enter ID : ";
		cin>>id;
		cout<<"  Enter pay : ";
		cin>>pay;
		cout<<"  Enter experience : ";
		cin>>exp;
		M[i].putdetail_m(name,id,pay,exp);

	}
	do{
		cout<<endl<<endl<<"  1.Update the infomation of master."<<endl;
		cout<<"  2.Display the infomation of master."<<endl;
		cout<<"  3.Exit."<<endl;
		cout<<endl<<"  Enter you choice : ";
		cin>>ch;
		switch(ch){
			case 1 :
			cout<<"  Enter Id of master : ";
			cin>>id;
			for(i=0; i<m; i++){
				if(M[i].check_id() == id){
					break;
				}
			}
			M[i].update_info();
			break;

			case 2 :
			cout<<"  Enter Id of master : ";
			cin>>id;
			for(j=0; j<m; j++){
				if(M[j].check_id() == id){
					break;
				}
			}
			M[j].display();
			break;

			case 3 :
			exit(0);
			break;

			default :
			cout<<"  Please enter correct choice!!!!!..."<<endl;
		}
	}while(true);
}