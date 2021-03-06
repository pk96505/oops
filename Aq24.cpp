#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

class shape{
	float length;
	float height;
	float f_area;
public:
	virtual void get_data(){
		cout<<"*******************************"<<endl;
		cout<<"  Enter length : ";
		cin>>length;
		cout<<"  Enter height : ";
		cin>>height;
	}

	virtual void display_area(){
		cout<<f_area<<endl;
	}

	float ar(){
		return (length*height);
	}

	virtual void area(float a){
		f_area = a;
	}
};

class triangle:public shape{

public:
	void getdata(){
		shape::get_data();
	}

	void area(){
		shape::area((0.5)*ar());
	}

	void display_area(){
		cout<<"  Area of Triangle : ";
		shape::display_area();
		cout<<"*******************************"<<endl;
	}
};

class rectangle:public shape{

public:
	void getdata(){
		shape::get_data();
	}

	void area(){
		shape::area(ar()); 
	}

	void display_area(){
		cout<<"  Area of Rectangle : ";
		shape::display_area();
		cout<<"*******************************"<<endl;
	}

};

int main(){
	int ch;
	triangle t;
	rectangle r;
	do{
		cout<<endl<<"  1.Calculate area of Triangle."<<endl;
		cout<<"  2.Calculate area of Rectangle."<<endl;
		cout<<"  3.Exit."<<endl<<endl;
		cout<<"  Enter your choice : ";
		cin>>ch;
		switch(ch){
			case 1 :
			t.getdata();
			t.area();
			t.display_area();
			break;

			case 2 :
			r.getdata();
			r.area();
			r.display_area();
			break;

			case 3 :
			exit(0);

			default:
			cout<<"  Enter correct choice."<<endl<<endl;
		}
	}while(true);
}