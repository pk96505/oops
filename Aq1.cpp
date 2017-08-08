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
	
	int x=0;
	int c;
	do{
	Bank_Account acc[x];
	cout<<"1.To create New Account."<<endl;
	cout<<"2.To deposit in Account."<<endl;
	cout<<"3.To withdraw from Account."<<endl;
	cout<<"4.To display your Account detail"<<endl;
	cout<<"5.Exit."<<endl;
	cout<<"  Enter your choice : ";
	cin>>c;
	switch(c){
	case 1: 
	acc[x].create_acc();
	x++;
	break;
	case 2:
	acc[x].deposit_amount();
	break;
	case 3:
	acc[x].withdraw();
	break;
	case 4:
	acc[x].display();
	break;
	case 5:
	exit(0);
	}
	}while(true);
	return 0;
}


void Bank_Account::create_acc(){
	cout<<"Enter your name : ";
	cin>>c_name;
	cout<<"Enter account type Saving/Current :";
	cin>>acc_type;
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
	
	cout<<"Account holder name: "<<c_name<<endl;
	cout<<"Account number: "<<c_acc_no<<endl;
	cout<<"Accoutn type: "<<acc_type<<endl;
	cout<<"Total balance: "<<balance<<endl;
}
	
	
