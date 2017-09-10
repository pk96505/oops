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
	person(const char *n, int i):id(i){
		int len = strlen(n);
		name = new char[len+1];
		strcpy(name,n);
	}

	void display_p(){
		cout<<"  Name : "<<name<<endl;
		cout<<"  ID : "<<id<<endl;
	}
};

class account:virtual protected person{
protected:
	int pay;
public:
	account(const char * n, int i, int p):person(n,i),pay(p){};

	void display_a(){
		display_p();
		cout<<"  Pay : "<<pay<<endl;
	}
};

class admin:virtual protected person{
protected:
	int experience;
public:
	admin(const char * n, int i, int e):person(n,i){
		experience = e;
	}

	void display_ad(){
		display_p();
		cout<<"  Experience : "<<experience<<endl;
	}
};

class master:protected account, protected admin{

public:
	master(const char * n, int i, int p, int e):account(n,i,p),admin(n,i,e),person(n,i){};
	void display(){
		cout<<"  Name : "<<name<<endl;
		cout<<"  ID : "<<id<<endl;
		cout<<"  Pay : "<<pay<<endl;
		cout<<"  Experience : "<<experience<<endl;
	}
};
int main(){
	master m("Pankaj",144,10,30000);
	m.display();
}