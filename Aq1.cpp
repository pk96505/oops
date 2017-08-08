#include<iostream>

using namespace std;
class Bank_Account{
	char c_name[30];
	long c_acc_no;
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
	long acc=3413101001000;

int main(){
	
	int c;
	Bank_Account acc[3];
	cout<<"1.Create account first: ";
	for(int i=0;i<3;i++){
	acc[i].create_acc();
	}
	do{
	cout<<"1.To deposit in Account."<<endl;
	cout<<"2.To withdraw from Account."<<endl;
	cout<<"3.To display your Account detail"<<endl;
	cout<<"4.Exit."<<endl;
	cout<<"  Enter your choice : ";
	cin>>c;
	switch(c){
	case 1:
	cout<<"Enter index: ";
	cin>>c;
	acc[c].deposit_amount();
	break;
	case 2:
	cout<<"Enter index: ";
	cin>>c;
	acc[c].withdraw();
	break;
	case 3:
	cout<<"Enter index: ";
	cin>>c;
	acc[c].display();
	break;
	case 4:
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
	c_acc_no=acc;
	acc++;
	display();
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
	if(amount>balance){
	cout<<"Insufficient Balance: ";
	cout<<balance<<endl;
	return;
	}
	balance-=amount;
	display();
}

void Bank_Account::display(){
	
	cout<<"Account holder name: "<<c_name<<endl;
	cout<<"Account number: "<<c_acc_no<<endl;
	cout<<"Accoutn type: "<<acc_type<<endl;
	cout<<"Total balance: "<<balance<<endl;
}
	
	
