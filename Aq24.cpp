#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

class shape{
	float v1;
	float v2;
	float area;
public:
	void get_data_rectangle(){
		cout<<"*******************************"<<endl;
		cout<<"  Detail of Rectangle "<<endl;
		cout<<"  Enter length : ";
		cin>>v1;
		cout<<"  Enter breadth : ";
		cin>>v2;
	}

	virtual void display_area(){
		cout<<area<<endl;
	}

	void get_data_triangle(){
		cout<<"*******************************"<<endl;
		cout<<"  Detail of Triangle"<<endl;
		cout<<"  Enter base : ";
		cin>>v1;
		cout<<"  Enter height : ";
		cin>>v2;
	}

	float ar(){
		return (v1*v2);
	}

	void update_area(float a){
		area = a;
	}
};

class triangle:public shape{

public:
	void getdata_t(){
	get_data_triangle();
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
	void getdata_r(){
		get_data_rectangle();
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
			t.getdata_t();
			t.area_triangle();
			t.display_area_t();
			break;

			case 2 :
			r.getdata_r();
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