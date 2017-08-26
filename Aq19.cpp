#include <iostream>

using namespace std;

class Base{
protected:
	int x;
	int y;
	Base(int x1,int y1){
		x = x1;
		y = y1;
	}
	void display(){
		cout<<"  Base class"<<endl;
		cout<<"  X : "<<x<<" |  Y : "<<y<<endl;
	}
};

class Derived : private Base{
	int a;
	int b;
public:
	Derived (int x1,int y1,int a1,int b1) : Base(x1,y1){
		a = a1;
		b = b1;
	}
	void display_B( Derived &d){
		d.Base::display();
	}
	void display(){
		cout<<"  Derived class"<<endl;
		cout<<"  A : "<<a<<" |  B : "<<b<<endl;
	}
};

int main(){
	Derived D(1,2,3,4);
	D.display_B(D);
	D.display();
	return 0;
}



