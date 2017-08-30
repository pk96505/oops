#include <iostream>

using namespace std;

class result{
	char name[30];
	int roll_no;
	float marks[5];
	float per;
	char grade;
public:
	void putdata();
	void getdata();
};

void result::putdata(){
	float sum = 0.0;
	cout<<"  Enter name : ";
	cin>>name;
	cout<<"  Enter roll no : ";
	cin>>roll_no;
	cout<<"  Enter marks of five subjects : "<<endl;
	for(int i = 0; i < 5; i++){
		cout<<"  Subject "<<i+1<<" = ";
		cin>>marks[i];
		sum = sum + marks[i];
	}
	per = sum/5;
	if(per<100 && per>=90){
		grade = 'A';
	}
	else
		if(per<90 && per>=85){
			grade = 'B';
		}
		else
			if(per<85 && per>=80){
				grade = 'C';
			}
			else
				if(per<80 && per>=75){
					grade = 'D';
				}
				else
					if(per<70 && per>=70){
						grade = 'E';
					}
					else
						if(per<70){
							grade = 'F';
						}
}

void result::getdata(){
	cout<<"  Name of the student : "<<name<<endl;
	cout<<"  Roll No. of student : "<<roll_no<<endl;
	cout<<"  Marks : "<<endl;
	for(int i = 0; i < 5; i++ ){
		cout<<"     Subject "<<i+1<<" = "<<marks[i]<<endl;
	}
	cout<<"  Percentage : "<<per<<endl<<endl;
	cout<<"  Grade : "<<grade<<endl<<endl;
}

int main(){
	int n;
	cout<<"  Enter the number of student : ";
	cin>>n;
	result r[n];
	for( int i = 0; i < n; i++ ){
	cout<<"  Student : "<<i+1<<endl;
	r[i].putdata();
	cout<<"****************************************"<<endl;
	}
	for( int i = 0; i < n; i++ ){
		cout<<endl<<"****************************************"<<endl;
		cout<<"  Detail of Student : "<<i+1<<endl<<endl;
		r[i].getdata();
		cout<<"****************************************"<<endl;
	}
	return 0;
}


