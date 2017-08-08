#include<iostream>

using namespace std;

class Bank_Account{
	char c_name[30];
	int c_acc_no;
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
	int check_acc_no(){
	return c_acc_no;
	}
};
	int acc=9000;
int check_acc_no(int);

int main(){
	int c,i;
	Bank_Account acc[3];
	for(int i=0;i<3;i++){
	acc[i].create_acc();
	}
	do{
	cout<<"   1.To deposit in Account."<<endl;
	cout<<"   2.To withdraw from Account."<<endl;
	cout<<"   3.To display your Account detail"<<endl;
	cout<<"   4.Exit."<<endl;
	cout<<endl<<"   Enter your choice : ";
	cin>>c;
	switch(c){
	case 1:
	cout<<"Enter Account No.: ";
	cin>>c;
	for(i=0;i<3;i++){
	if(acc[i].check_acc_no()==c)
	break;
	}
	acc[i].deposit_amount();
	break;
	case 2:
	cout<<"Enter Account No.:";
	cin>>c;
	for(i=0;i<3;i++){
        if(acc[i].check_acc_no()==c)
        break;
        }
	acc[i].withdraw();
	break;
	case 3:
	cout<<"Enter Account No.: ";
	cin>>c;
	 for(i=0;i<3;i++){
        if(acc[i].check_acc_no()==c)
        break;
        }
	acc[i].display();
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
	cout<<endl<<".................................................."<<endl;
	cout<<"   Account holder name: "<<c_name<<endl;
	cout<<"   Account number: "<<c_acc_no<<endl;
	cout<<"   Accoutn type: "<<acc_type<<endl;
	cout<<"   Total balance: "<<balance<<endl;
	cout<<".................................................."<<endl;
}
	
	
