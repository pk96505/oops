#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

class shape{
	float length;
	float height;
	float area;
public:
	virtual void get_data(){
		cout<<"*******************************"<<endl;
		cout<<"  Enter length : ";
		cin>>length;
		cout<<"  Enter height : ";
		cin>>height;
	}

	virtual void display_area(){
		cout<<area<<endl;
	}

	float ar(){
		return (length*height);
	}

	void update_area(float a){
		area = a;
	}
};

class triangle:public shape{

public:
	void getdata(){
	get_data();
	}

	void area_triangle(){
		float area;
		area = (0.5)*ar();
		update_area(area);
	}

	void display_area_t(){
		cout<<"  Area of Triangle : ";
		display_area();
		cout<<"*******************************"<<endl;
	}
};

class rectangle:public shape{

public:
	void getdata(){
		get_data();
	}

	void area_rectangle(){
		float area;
		area = ar(); 
		update_area(area);
	}

	void display_area_r(){
		cout<<"  Area of Rectangle : ";
		display_area();
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
			t.area_triangle();
			t.display_area_t();
			break;

			case 2 :
			r.getdata();
			r.area_rectangle();
			r.display_area_r();
			break;

			case 3 :
			exit(0);

			default:
			cout<<"  Enter correct choice."<<endl<<endl;
		}
	}while(true);
}