#include <iostream>

using namespace std;

class base1{
protected:
	int x;
	base1(int x1){
		x = x1;
	}
	void display_1(){
		cout<<"  Base1 : "<<x<<endl;
	}
};

class base2{
protected:
	int y;
	base2(int x2){
		y = x2;
	}
	void display_2(){
		cout<<"  Base2 : "<<y<<endl;
	}
};

class derived : protected base1, private base2{
	int a;
public:
	derived(int x1, int x2, int x3) : base1(x1),base2(x2){
		a = x3;
	}
	void display_d(derived &d){
		d.base1::display_1();
		d.base2::display_2();
	}
	void display(){
		cout<<"  Derived : "<<a<<endl;
	}
};

class derivedL2 : public derived{
	int b;
public:
	derivedL2(int x1, int x2, int x3, int x4) : derived(x1,x2,x3){
		b = x4;
	}
	void display(derivedL2 &d){
		d.derived::display();
	}
	void display2(){
		cout<<"  DerivedL2 : "<<b<<endl;
	}
    ~derivedL2(){
        cout<<"  Delete derivedL2....."<<endl;
    }
};

int main(){
	derivedL2 d(1,2,3,4);
	d.display_d(d);
	d.display(d);
	d.display2();
	return 0;
}
