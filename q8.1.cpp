#include <iostream>
#include <cstdlib>

using namespace std;
int account_no_c = 13100;
int account_no_s = 15100; 
int cheque_n = 274010;

class account{
	char *c_name;
	int acc_no;
	char *type_acc;
};

class cur_acct:protected account{
	int cheque_no;
	char *withd_status_c;
	float balance_c;
public:
	void putdetail_c(char *name, char *type);
	void withd_cheque(int cheque_n char *withd_s_cheq);
	void withd_cash(char *withd_s_c);
	void check_bal(float min_bal);
	void display_c();
};

class sav_acct:protected account{
	float ci;
	float balance_s;
	char *withd_status_s;
public:
	void putdetail_s(char *name, char *type);
	void calc_ci();
	void display_s();
};

cur_acct::putdetail_c(char *name, char *type){
	int len_n = strlen(name);
	int len_t = strlen(type);
	c_name = new char[len_n + 1];
	type_acc = new char[len_t + 1];
	strcpy(c_name, name);
	acc_no = account_no_c;
	strcpy(type_acc,type);
	cheque_no = cheque_n;
	balance_c = 5000;
	account_no_c++;
	cheque_n+=100;
}

cur_acct::display_c(){
	cout<<"  Account holder name : "<<c_name;
	cout<<"  Account number : "<<acc_no;
	cout<<"  Type : "<< type_acc;
	cout<<"  Total Balance : "<<balance_c;
}

cur_acct::check_bal(float min_bal){
	if(min_bal<5000){
		cout<<"  Your account has gone below minimum balance required. That is 5000."<<endl<<endl;
		balance_c-=100;
	}
}

cur_acct::withd_cheque(int cheque_n, char *withd_s_cheq){
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

cur_acct::withd_cash(char *withd_s_c){
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

sav_acct::putdetail_s(char *name, char *type){
	int len_n = strlen(name);
	int len_t = strlen(type);
	c_name = new char[len_n + 1];
	type_acc = new char[len_t + 1];
	strcpy(c_name, name);
	acc_no = account_no_c;
	strcpy(type_acc,type);
	balance_s = 2000;
	account_no_c++;
	ci = 0.0;
}