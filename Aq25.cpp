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

	virtual void get_data_c(){
		cout<<"*******************************"<<endl;
		cout<<"  Enter radius : ";
		cin>>length;
		height = length;
	}

	virtual void display_area(){
		cout<<f_area<<endl;
	}

	virtual float ar(){
		return (length*height);
	}

	virtual void area(float a){
		f_area = a;
	}
};

class triangle:public shape{

public:
	void get_data(){
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
	void get_data(){
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

class circle:public shape{

public:
	void get_data(){
		shape::get_data_c();
	}

	void area(){
		shape::area(3.14159265359*ar());
	}

	void display_area(){
		cout<<"  Area of Circle : ";
		shape::display_area();
		cout<<"*******************************"<<endl;
	}

};

int main(){
	int ch;
	triangle t;
	rectangle r;
	circle c;
	do{
		cout<<endl<<"  1.Calculate area of Triangle."<<endl;
		cout<<"  2.Calculate area of Rectangle."<<endl;
		cout<<"  3.Calculate area of Circle."<<endl;
		cout<<"  4.Exit."<<endl<<endl;
		cout<<"  Enter your choice : ";
		cin>>ch;
		switch(ch){
			case 1 :
			t.get_data();
			t.area();
			t.display_area();
			break;

			case 2 :
			r.get_data();
			r.area();
			r.display_area();
			break;

			case 3 :
			c.get_data();
			c.area();
			c.display_area();
			break;

			case 4 :
			exit(0);

			default:
			cout<<"  Enter correct choice."<<endl<<endl;
		}
	}while(true);
}