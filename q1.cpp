#include<iostream>

using namespace std;
	struct ele_board{
		char name[30];
		double unit;
		double charges;
		};
double bill(double);

int main(void){
	struct ele_board record[5];
	for(int i=0;i<5;i++){
	cout<<i+1<<" Enter name: ";
	cin>>record[i].name;
	cout<<i+1<<" Enter unit ";
	cin>>record[i].unit;
	record[i].charges=bill(record[i].unit);
	}
	cout<<"  S.No"<<"  Name     "<<"  Unit  "<<"  Amount Charges   "<<endl;
	for(int j=0;j<5;j++){
	cout<<"   "<<j+1<<"  "<<record[j].name<<"       "<<record[j].unit<<"    "<<record[j].charges<<endl;
	}
}

double bill(double unit){
	double amount=50;
	for(int i=1;i<=unit;i++){
	if(i<=100)
	{
	amount+=0.6;
	}
	else if(i<=300)
	{
	amount+=0.8;
	}
	else if(i>300)
	{
	amount+=0.9;
	}
	}
	if (amount>300)
	{
	amount+=(amount*0.15);
	}
	return amount;
}	
