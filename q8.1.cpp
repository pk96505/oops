#include <iostream>
#include <cstdlib>

using namespace std;
int account_no_c = 13100;
int account_no_s = 15100; 
int cheque_n = 274010;

class account{
	char *c_name;
	char *type_acc;
public:
	void putdetail(char *name, char *type){
		int len_n = strlen(name);
		int len_t = strlen(type);
		c_name = new char[len_n + 1];
		type_acc = new char[len_t + 1];
		strcpy(c_name, name);
		strcpy(type_acc,type);
	}

	void display(){
		cout<<"  Account holder name : "<<c_name;
		cout<<"  Type : "<< type_acc;
	}
};

class cur_acct:public account{
	int cheque_no;
	int acc_no_c;
	char *withd_status_c;
	float balance_c;
public:
	void putdetail_c(char *name, char *type);
	void withd_cheque(int cheque_n, char *withd_s_cheq);
	void withd_cash(char *withd_s_c);
	void check_bal(float min_bal);
	void display_c();
};

class sav_acct:public account{
	float ci;
	int acc_no_s;
	float balance_s;
	char *withd_status_s;
public:
	void putdetail_s(char *name, char *type);
	void calc_ci();
	void withdraw();
	void display_s();
};

void cur_acct::putdetail_c(char *name, char *type){
	acc_no_c = account_no_c;
	cheque_no = cheque_n;
	balance_c = 5000;
	account_no_c++;
	cheque_n+=100;
}

void cur_acct::display_c(){
	display();
	cout<<"  Account number : "<<acc_no_c;
	cout<<"  Total Balance : "<<balance_c;
}

void cur_acct::check_bal(float min_bal){
	if(min_bal<5000){
		cout<<"  Your account has gone below minimum balance required. That is 5000."<<endl<<endl;
		balance_c-=100;
	}
}

void cur_acct::withd_cheque(int cheque_n, char *withd_s_cheq){
	float amount;
	int len = strlen (withd_s_cheq);
	withd_status_c = new char[len +1];
	strcpy(withd_status_c,withd_s_cheq);
	cheque_no--;
	cout<<"   Enter the amount to withdraw from acccount : ";
	cin>>amount;
	balance_c-=amount;
	check_bal(balance_c);
	display_c();
}

void cur_acct::withd_cash(char *withd_s_c){
	float amount;
	int len = strlen (withd_s_c);
	withd_status_c = new char[len +1];
	strcpy(withd_status_c,withd_s_c);
	cout<<"   Enter the amount to withdraw from acccount : ";
	cin>>amount;
	balance_c-=amount;
	check_bal(balance_c);
	display_c();
}

void sav_acct::putdetail_s(char *name, char *type){
	acc_no_s = account_no_c_s;
	balance_s = 2000;
	account_no_c++;
	ci = 0.0;
}

void sav_acct::display_s(){
	display();
	cout<<"  Account number : "<<acc_no_s;
	cout<<"  Total Balance : "<<balance_s;
}

void sav_acct::calc_ci(){
	float time;
	cout<<"   Enter time : ";
	cin>>time;
	ci = balance_s * pow((1+0.05),time) - balance_s;
	display_s();
	balance_s+=ci; 
	cout<<"   Compound Interest is : "<<ci<<endl;
	cout<<"   Main balance is : "<<balance_s<<endl;
}

void sav_acct::withdraw(){
	float amount;
	cout<<"   Enter the amount to withdraw from account : ";
	cin>>amount;
	balance_s -= amount;
	display_s(); 
}

int main(){
	cur_acct c;
	sav_acct s;
	c.putdetail_c("Pankaj","current");
	s.putdetail_s("Gagan","savings");
	c.display_c();
	s.display_s();
}


