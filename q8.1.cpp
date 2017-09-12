#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>

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
		cout<<"  Account holder name : "<<c_name<<endl;
		cout<<"  Account Type : "<< type_acc<<endl;
	}
};

class cur_acct:public account{
	int cheque_no_f;
	int cheque_no_t;
	int acc_no_c;
	float balance_c;
public:
	void putdetail_c();
	int cheque_no();
	void deposit_amount();
	void issue();
	void withd_cheque(int cheque);
	void withd_cash();
	void check_bal(float min_bal);
	void display_bala_c();
	int check_acc_no(){
	return acc_no_c;
	}
	void display_c();
};

class sav_acct:public account{
	float ci;
	int acc_no_s;
	float balance_s;
	char *withd_status_s;
public:
	void putdetail_s();
	void deposit_amount();
	void calc_ci();
	void withdraw();
	void display_bala_s();
	int check_acc_no(){
	return acc_no_s;
	}
	void display_s();
};

int cur_acct::cheque_no(){
	return cheque_no_f;
}

void cur_acct::display_bala_c(){
	cout<<endl<<"*******************************************"<<endl;
	display();
	cout<<"  Total Balance is : "<<balance_c<<endl<<endl;
	cout<<endl<<"*******************************************"<<endl;
}

void cur_acct::putdetail_c(){
	char name[30],type[10];
	cout<<"  Enter the name of account holder : ";
	cin.ignore(-1);
	cin.getline(name,30);
	cout<<"  Enter account type : ";
	cin.ignore(-1);
	cin.getline(type,10);
	putdetail(name,type);
	acc_no_c = account_no_c;
	cheque_no_f = cheque_n-10;
	cheque_no_t = cheque_n;
	balance_c = 5000;
	account_no_c++;
	cheque_n+=100;
}

void cur_acct::display_c(){
	cout<<"*******************************************"<<endl;
	display();
	cout<<"  Account number : "<<acc_no_c<<endl;
	cout<<"  Total Balance : "<<balance_c<<endl;
	if(cheque_no_f == cheque_no_t){
		cout<<"  Cheque no. : "<<cheque_no_f<<" is cheque so please issue a new cheque book."<<endl;
	}
	else
	   {
	cout<<"  Cheque Book no. From : "<<cheque_no_f<<" to "<<cheque_no_t<<endl;
	}
	cout<<"*******************************************"<<endl;
}

void cur_acct::check_bal(float min_bal){
	if(min_bal<5000){
		cout<<"  Your account has gone below minimum balance required. That is 5000."<<endl<<endl;
		balance_c -= 100;
	}
}

void cur_acct::issue(){
	cheque_no_f -= 10; 
}

void cur_acct::withd_cheque(int cheque){
	float amount;
		cout<<"   Enter the amount to withdraw from acccount : ";
		cin>>amount;
		balance_c-=amount;
		check_bal(balance_c);
		if(cheque == cheque_no_t){
			cout<<"  This was your last cheque, So please issue new cheque book."<<endl;
			issue();
		}
		else
		{
			cheque_no_f++;
		}
		display_c();
}

void cur_acct::deposit_amount(){
	double amount;
	cout<<"Enter amount to deposit in account :";
	cin>>amount;
	balance_c+=amount;
	display_c();
}

void cur_acct::withd_cash(){
	float amount;
	cout<<"   Enter the amount to withdraw from acccount : ";
	cin>>amount;
	balance_c-=amount;
	check_bal(balance_c);
	display_c();
}

void sav_acct::display_bala_s(){
	cout<<endl<<"*******************************************"<<endl;
	display();
	cout<<"  Total Balance is : "<<balance_s<<endl<<endl;
	cout<<endl<<"*******************************************"<<endl;
}

void sav_acct::putdetail_s(){
	char name[30],type[10];
	cout<<"  Enter the name of account holder : ";
	cin.ignore(-1);
	cin.getline(name,30);
	cout<<"  Enter accoutn type : ";
	cin.ignore(-1);
	cin.getline(type,10);
	putdetail(name,type);
	acc_no_s = account_no_s;
	balance_s = 2000;
	account_no_s++;
	ci = 0.0;
}

void sav_acct::display_s(){
	cout<<"*******************************************"<<endl;
	display();
	cout<<"  Account number : "<<acc_no_s<<endl;
	cout<<"  Total Balance : "<<balance_s<<endl;
	cout<<"*******************************************"<<endl;
}

void sav_acct::calc_ci(){
	float time;
	cout<<"   Enter time : ";
	cin>>time;
	ci = balance_s * pow((1+0.05),time) - balance_s;
	display_s();
	balance_s+=ci; 
	cout<<"   Compound Interest is : "<<ci<<endl;
	cout<<"   Main balance is : "<<balance_s<<endl<<endl<<endl;
}

void sav_acct::deposit_amount(){
	double amount;
	cout<<"Enter amount to deposit in account :";
	cin>>amount;
	balance_s+=amount;
	display_s();
}

void sav_acct::withdraw(){
	float amount;
	cout<<"   Enter the amount to withdraw from account : ";
	cin>>amount;
	balance_s -= amount;
	display_s(); 
}

int main(){
	int type,c_c;
	int account_no;
	float amount;
	int c=2,s=1,ch,j;
	cur_acct c_a[c];
	sav_acct s_a[s];
	cout<<"  Enter detail of two current account holder and one saving account holder first."<<endl;
	for(int i=0; i<c; i++){
	c_a[i].putdetail_c();	
	}
	for(int j=0; j<s; j++){
	s_a[j].putdetail_s();
	}
	do{
		cout<<endl<<endl<<"  1.Deposit money in account."<<endl;
		cout<<"  2.Display the balance."<<endl;
		cout<<"  3.Compute and deposit Interest in Saving account."<<endl;
		cout<<"  4.Withdraw money from account."<<endl;
		cout<<"  5.Display detail of account holder."<<endl;
		cout<<"  6.Exit."<<endl<<endl;
		cout<<"    Enter your choice : ";
		cin>>ch;
		switch(ch){
			case 1 :
			cout<<endl<<"  Enter account type 1 for current and 2 for savings : ";
			cin>>type;
			if(type==1){
				cout<<endl<<"  Please enter your account no. : ";
				cin>>account_no;
				for(j=0; j<c; j++){
					if(c_a[j].check_acc_no()==account_no)
					break;
				}
				c_a[j].deposit_amount();
				}
				else
					if(type==2){
						cout<<endl<<"  Please enter your account no. : ";
						cin>>account_no;
						for(j=0; j<s; j++){
							if(s_a[j].check_acc_no()==account_no)
							break;
						}
						s_a[j].deposit_amount();
					}
					else
					{
						cout<<"  Please enter correct account type. Please try again later......"<<endl;
					}
					break;

			case 2 :
			cout<<endl<<"  Enter account type 1 for current and 2 for savings : ";
			cin>>type;
			if(type==1){
				cout<<endl<<"  Please enter your account no. : ";
				cin>>account_no;
				for(j=0; j<c; j++){
					if(c_a[j].check_acc_no()==account_no)
					break;
				}
				c_a[j].display_bala_c();
				}
				else
					if(type==2){
						cout<<endl<<"  Please enter your account no. : ";
						cin>>account_no;
						for(j=0; j<s; j++){
							if(s_a[j].check_acc_no()==account_no)
							break;
						}
						s_a[j].display_bala_s();
					}
					else
					{
						cout<<"  Please enter correct account type. Please try again later......"<<endl;
					}
					break;
			
			case 3 :
			cout<<endl<<"  Please enter your account no. : ";
			cin>>account_no;
			for(j=0; j<c; j++){
				if(s_a[j].check_acc_no()==account_no)
				break;
				}
				s_a[j].calc_ci();
				break;

			case 4 :
			cout<<endl<<"  Enter account type 1 for current and 2 for savings : ";
			cin>>type;
			if(type==1){
				cout<<"  1.By Cheque."<<endl;
				cout<<"  2.By Self."<<endl;
				cout<<"   Enter your choice : ";
				cin>>c_c;
				switch(c_c){
					case 1 :
					cout<<endl<<"  Please enter your account no. : ";
					cin>>account_no;
					for(j=0; j<c; j++){
					if(c_a[j].check_acc_no()==account_no)
					break;
					}
				    c_a[j].withd_cheque(c_a[j].cheque_no());
				    break;

					case 2 :
					cout<<endl<<"  Please enter your account no. : ";
					cin>>account_no;
						for(j=0; j<c; j++){
					if(c_a[j].check_acc_no()==account_no)
					break;
					}
					c_a[j].withd_cash();
					break;
				}
			}
				else
					if(type==2){
						cout<<endl<<"  Please enter your account no. : ";
						cin>>account_no;
						for(j=0; j<s; j++){
							if(s_a[j].check_acc_no()==account_no)
							break;
						}
						s_a[j].withdraw();
					}
					else
					{
						cout<<"  Please enter correct account type. Please try again later......"<<endl;
					}
					break;

			case 5 :
			for(int i=0; i<c; i++){
				c_a[i].display_c();
			}
			for(int i=0; i<s; i++){
				s_a[i].display_s();
			}
			break;

			case 6 :
			exit(0);
			}
		}while(true);
	
}


