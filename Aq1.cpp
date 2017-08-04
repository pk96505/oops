#include<iostream>

using namespace std;
class Bank_Account{
	char c_name[30];
static	long c_acc_no;
	char acc_type[10];
	long balance;
public:
	Bank_Account(){
	balance=1000;
	}
	void create_acc();
	void deposit_amount();
	void withdraw();
	void display();
};

long Bank_Account::c_acc_no=341310100000;

int main(){
	Bank_Account acc;
	acc.create_acc();
	return 0;
	}


void Bank_Account::create_acc(){
	cout<<"Enter your name : ";
	gets(c_name);
	cout<<"Enter account type Saving/Current :";
	gets(acc_type);
	display();
	c_acc_no++;
}

void Bank_Account::deposit_amount(){
	double amount;
	cout<<"Enter amount to deposit in account :";
	cin>>amount;
	balance+=amount;
	display();
}

void Bank_Account::withdraw(){
	double amount;
	cout<<"Enter amount to withdraw from account :";
	cin>>amount;
	balance-=amount;
	display();
}

void Bank_Account::display(){
	cout<<c_name;
	cout<<c_acc_no;
	cout<<acc_type;
	cout<<balance;
}
	
	
