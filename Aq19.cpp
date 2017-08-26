#include <iostream>

using namespace std;

class Base{
	int x;
	int y;
public:
	Base(int x1,int y1){
		x = x1;
		y = y1;
	}
	void display_B(){
		cout<<"  Base class"<<endl;
		cout<<"  X : "<<x<<" |  Y : "<<y<<endl;
	}
};

class Derived : public Base{
	int a;
	int b;
public:
	Derived (int x1,int y1,int a1,int b1) : Base(x1,y1){
		a = a1;
		b = b1;
	}
	void display_D(){
		cout<<"  Derived class"<<endl;
		cout<<"  A : "<<a<<" |  B : "<<b<<endl;
	}
};

int main(){
	Derived D(1,2,3,4);
	D.display_B();
	D.display_D();
	return 0;
}



