#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

class Date{
	int dd,mm,yyyy;
public:
	void putdob(){
		cout<<"  Enter Date of Birth : "<<endl;
		cout<<"  Enter Date : ";
		cin>>dd;
		cout<<"  Enter Month : ";
		cin>>mm;
		cout<<"  Enter Year : ";
		cin>>yyyy;
	}

	void putdoj(){
		cout<<"  Enter Date of Joining : "<<endl;
		cout<<"  Enter Date : ";
		cin>>dd;
		cout<<"  Enter Month : ";
		cin>>mm;
		cout<<"  Enter Year : ";
		cin>>yyyy;
	}

	void display_dob(){
		cout<<"  Date of Birth : "<<dd<<"/"<<mm<<"/"<<yyyy<<endl;
	}

	void display_doj(){
		cout<<"  Date of Joining : "<<dd<<"/"<<mm<<"/"<<yyyy<<endl;
	}
};

class staff{
	char name[30];
	int id;
	Date dob;
	Date doj;
public:
	void putdetail(){
		cout<<"  Enter Name : ";
		cin>>name;
		cout<<"  Enter Id : ";
		cin>>id;
		dob.putdob();
		doj.putdoj();
	}

	void display(){
		cout<<"  Name : "<<name<<endl;
		cout<<"  ID : "<<id<<endl;
		dob.display_dob();
		doj.display_doj();
	}

};

class teacher{
	char subject[20];
	staff t;
public:
	void putdetail_t(){
		t.putdetail();
		cout<<"  Enter name of subject : ";
		cin>>subject;
	}

	void display_t(){
		cout<<"*****************************************"<<endl;
		cout<<"  Detail of Teacher "<<endl;
		t.display();
		cout<<"  Subject : "<<subject<<endl;
		cout<<"*****************************************"<<endl<<endl;
	}
};

class officer{
	char grade;
	staff o;
public:
	void putdetail_o(){
		o.putdetail();
		cout<<"  Enter grade of officer : ";
		cin>>grade;
	}

	void display_o(){
		cout<<"*****************************************"<<endl;
		cout<<"  Detail of Officer "<<endl;
		o.display();
		cout<<"  Grade : "<<grade<<endl;
		cout<<"*****************************************"<<endl<<endl;
	}
};

class typist{
	int speed;
	staff t;
public:
	void putdetail_typist(){
		t.putdetail();
		cout<<"  Enter typing speed : ";
		cin>>speed;
	}

	void display_typist(){
		t.display();
		cout<<"  Speed of typing : "<<speed<<endl;
	}
};

class regular:public typist{

public:
	void putdetail_typ_r(){
		putdetail_typist();
	}

	void display_typ_r(){
		cout<<"*****************************************"<<endl;
		cout<<"  Detail of regular typist "<<endl;
		display_typist();
		cout<<"*****************************************"<<endl<<endl;
	}
};

class casual:public typist{
	float daily_wages;
public:
	void putdetail_typ_c(){
		putdetail_typist();
		cout<<"  Enter daily daily_wages : ";
		cin>>daily_wages;
	}

	void display_typ_c(){
		cout<<"*****************************************"<<endl;
		cout<<"  Detail of regular casual "<<endl;
		display_typist();
		cout<<"  Daily Wages is : "<<daily_wages<<endl;
		cout<<"*****************************************"<<endl<<endl;
	}
};

int main(){
	teacher t;
	officer o;
	regular r_t;
	casual c_t;
	cout<<"*****************************************"<<endl;
	cout<<endl<<"  Enter the detail of teacher : "<<endl;
	t.putdetail_t();
	cout<<"*****************************************"<<endl;
	cout<<endl<<"  Enter the detail of officer : "<<endl;
	o.putdetail_o();
	cout<<"*****************************************"<<endl;
	cout<<endl<<"  Enter the detail of regular typist : "<<endl;
	r_t.putdetail_typ_r();
	cout<<"*****************************************"<<endl;
	cout<<endl<<"  Enter the detail of casual typist : "<<endl;
	c_t.putdetail_typ_c();
	t.display_t();
	o.display_o();
	r_t.display_typ_r();
	c_t.display_typ_c();
}